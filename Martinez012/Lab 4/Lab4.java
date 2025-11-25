// PART A: Software Timing with micros()

#include <EEPROM.h>

void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println(F("--- PART A: EEPROM Timing with micros() ---"));
  Serial.println();
  
  // Test addresses
  int addr1 = 100;    // 1 byte test
  int addr2 = 200;    // 2 byte test  
  int addr4 = 300;    // 4 byte test
  
  unsigned long t0, t1, deltaT;
  
  // === 1. WRITE 1 byte ===
  t0 = micros();
  EEPROM.write(addr1, 123);
  t1 = micros();
  deltaT = t1 - t0;
  Serial.print(F("WRITE 1 byte: "));
  Serial.print(deltaT);
  Serial.println(F(" us"));
  
  //  2. READ 1 byte 
  t0 = micros();
  byte value1 = EEPROM.read(addr1);
  t1 = micros();
  deltaT = t1 - t0;
  Serial.print(F("READ 1 byte: "));
  Serial.print(deltaT);
  Serial.println(F(" us"));
  Serial.println();
  
  //  3. WRITE 2 bytes 
  int writeValue2 = 12345;
  t0 = micros();
  EEPROM.put(addr2, writeValue2);
  t1 = micros();
  deltaT = t1 - t0;
  Serial.print(F("WRITE 2 bytes: "));
  Serial.print(deltaT);
  Serial.println(F(" us"));
  
  //  4. READ 2 bytes 
  int readValue2;
  t0 = micros();
  EEPROM.get(addr2, readValue2);
  t1 = micros();
  deltaT = t1 - t0;
  Serial.print(F("READ 2 bytes: "));
  Serial.print(deltaT);
  Serial.println(F(" us"));
  Serial.println();
  
  //  5. WRITE 4 bytes 
  long writeValue4 = 987654321;
  t0 = micros();
  EEPROM.put(addr4, writeValue4);
  t1 = micros();
  deltaT = t1 - t0;
  Serial.print(F("WRITE 4 bytes: "));
  Serial.print(deltaT);
  Serial.println(F(" us"));
  
  //  6. READ 4 bytes 
  long readValue4;
  t0 = micros();
  EEPROM.get(addr4, readValue4);
  t1 = micros();
  deltaT = t1 - t0;
  Serial.print(F("READ 4 bytes: "));
  Serial.print(deltaT);
  Serial.println(F(" us"));
  Serial.println();
  
  //  7. WRITE full sweep (4096 bytes) 
  t0 = micros();
  for (int addr = 0; addr < 4096; addr++) {
    EEPROM.write(addr, addr % 256);  
  }
  t1 = micros();
  deltaT = t1 - t0;
  Serial.print(F("WRITE 4096 bytes: "));
  Serial.print(deltaT);
  Serial.println(F(" us"));
  
  //  8. READ full sweep (4096 bytes) 
  byte readValue;
  t0 = micros();
  for (int addr = 0; addr < 4096; addr++) {
    readValue = EEPROM.read(addr);  // Read each byte
  }
  t1 = micros();
  deltaT = t1 - t0;
  Serial.print(F("READ 4096 bytes: "));
  Serial.print(deltaT);
  Serial.println(F(" us"));

}

void loop() {
  // run once
}