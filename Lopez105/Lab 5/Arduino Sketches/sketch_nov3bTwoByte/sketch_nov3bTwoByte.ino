#include <EEPROM.h>

#define pulsePin 13
#define SET_HI() digitalWrite(pulsePin, HIGH)
#define SET_LO() digitalWrite(pulsePin, LOW)

const int baseAddr = 200;

void setup() {
  Serial.begin(115200);
  pinMode(pulsePin, OUTPUT);
}

void loop() {
  digitalWrite(pulsePin, LOW);
  delay(1000);

  Serial.println(F("2 BYTE EEPROM TEST"));

  // WRITE TEST
  byte old1 = EEPROM.read(baseAddr);
  byte old2 = EEPROM.read(baseAddr + 1);
  byte new1 = old1 ^ 0xAA;
  byte new2 = old2 ^ 0x55;
  
  SET_HI();
  unsigned long t0 = micros();
  EEPROM.write(baseAddr, new1);
  EEPROM.write(baseAddr + 1, new2);
  unsigned long t1 = micros();
  SET_LO();

  Serial.print(F("WRITE 2B time: "));
  Serial.print(t1 - t0);
  Serial.println(F(" us"));

  delay(1000);

  // READ TEST
  SET_HI();
  t0 = micros();
  byte v1 = EEPROM.read(baseAddr);
  byte v2 = EEPROM.read(baseAddr + 1);
  t1 = micros();
  SET_LO();

  Serial.print(F("READ 2B time: "));
  Serial.print(t1 - t0);
  Serial.println(F(" us"));
  Serial.print(F("Values: "));
  Serial.print(v1);
  Serial.print(F(", "));
  Serial.println(v2);

  Serial.println(F("Test complete."));
}
