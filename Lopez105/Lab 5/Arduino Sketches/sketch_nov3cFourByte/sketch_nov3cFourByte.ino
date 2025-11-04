#include <EEPROM.h>

#define pulsePin 13
#define SET_HI() digitalWrite(pulsePin, HIGH)
#define SET_LO() digitalWrite(pulsePin, LOW)

const int baseAddr = 300;

void setup() {
  Serial.begin(115200);
  pinMode(pulsePin, OUTPUT);
}

void loop() {
  digitalWrite(pulsePin, LOW);
  delay(1000);

  Serial.println(F("4 BYTE EEPROM TEST"));

  // WRITE TEST
  byte vals[4];

  SET_HI();
  unsigned long t0 = micros();
  for (int i = 0; i < 4; i++){
    EEPROM.write(baseAddr + i, vals[i] ^ (0x0F + i));
  }
  unsigned long t1 = micros();
  SET_LO();

  Serial.print(F("WRITE 4B time: "));
  Serial.print(t1 - t0);
  Serial.println(F(" us"));

  delay(1000);

  // READ TEST
  SET_HI();
  t0 = micros();
  for (int i = 0; i < 4; i++){
    vals[i] = EEPROM.read(baseAddr + i);
  }
  t1 = micros();
  SET_LO();

  Serial.print(F("READ 4B time: "));
  Serial.print(t1 - t0);
  Serial.println(F(" us"));

  Serial.println(F("Test complete."));
}
