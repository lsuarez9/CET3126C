#include <EEPROM.h>

#define pulsePin 13

const int addr = 100;

void setup() {
  Serial.begin(115200);
  pinMode(pulsePin, OUTPUT);
}

void loop() {
  digitalWrite(pulsePin, LOW);
  delay(1000);

  Serial.println(F("1 BYTE EEPROM Test"));

  // WRITE TEST
  byte oldVal = EEPROM.read(addr);
  byte newVal = oldVal ^ 0xFF; // ^ = XOR to ensure real write

  digitalWrite(pulsePin, HIGH);
  unsigned long t0 = micros();
  EEPROM.write(addr, newVal);
  unsigned long t1 = micros();
  digitalWrite(pulsePin, LOW);

  Serial.print(F("WRITE 1B time: "));
  Serial.print(t1 - t0);
  Serial.println(F(" us"));

  delay(1000); // Small gap before read

  // Read test
  digitalWrite(pulsePin, HIGH); 
  t0 = micros();
  byte val = EEPROM.read(addr);
  t1 = micros();
  digitalWrite(pulsePin, LOW);

  Serial.print(F("READ 1B time: "));
  Serial.print(t1 - t0);
  Serial.println(F(" us"));
  Serial.print(F("Value read: "));
  Serial.println(val);

  Serial.println(F("Test complete."));
}
