#include <EEPROM.h>

#define pulsePin 13
#define EEPROM_SIZE 4096

void setup() {
  Serial.begin(115200);
  pinMode(pulsePin, OUTPUT);
}

void loop() {
  digitalWrite(pulsePin, LOW);

  Serial.println(F("EEPROM FULL SWEEP TIMING"));
  
  // WRITE TEST
  digitalWrite(pulsePin, HIGH);
  unsigned long t0 = micros();
  for (int i = 0; i < EEPROM_SIZE; i++) {
    EEPROM.write(i, i % 256);  // A changing pattern
  }
  unsigned long t1 = micros();
  digitalWrite(pulsePin, LOW);
  Serial.print(F("WRITE full (4096B): "));
  Serial.print(t1 - t0);
  Serial.println(F(" us"));

  // READ TEST
  digitalWrite(pulsePin, HIGH);
  t0 = micros();
  for (int i = 0; i < EEPROM_SIZE; i++) {
    volatile byte data = EEPROM.read(i);
  }
  t1 = micros();
  digitalWrite(pulsePin, LOW);
  Serial.print(F("READ full (4096B): "));
  Serial.print(t1 - t0);
  Serial.println(F(" us"));

  Serial.println(F("DONE"));

}
