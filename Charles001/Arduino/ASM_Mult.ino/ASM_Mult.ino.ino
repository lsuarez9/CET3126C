// EX1_ASM_Mul_HW.ino
#include <avr/io.h>
#include <avr/interrupt.h>

#define PIN_MASK  (1<<PB7)   // D13
#define PIN_OUT() (DDRB  |= PIN_MASK)
#define SET_HI()  (PORTB |= PIN_MASK)
#define SET_LO()  (PORTB &= ~PIN_MASK)

const uint32_t OUTER = 1200UL;
const uint8_t  XVAL  = 25;
const uint8_t  MVAL  = 97;

volatile uint16_t sink16;

static uint16_t mul_hw(uint8_t a, uint8_t b){
  uint8_t lo, hi;
  asm volatile(
    "mul %2, %3     \n\t"   // r1:r0 = a*b (8x8 -> 16-bit)
    "mov %0, r0     \n\t"   // lo
    "mov %1, r1     \n\t"   // hi
    "clr r1         \n\t"   // ABI: r1 must be zero
    : "=&r"(lo), "=&r"(hi)
    : "r"(a), "r"(b)
    : "r0","cc"
  );
  return (uint16_t)lo | ((uint16_t)hi<<8);
}

void setup(){
  cli();
  PIN_OUT();
  SET_LO();
}

void loop(){
  uint16_t res = 0;
  SET_HI();
  for(uint32_t i=0;i<OUTER;++i){
    res ^= mul_hw(XVAL, MVAL);   // 1 instruction per multiply
  }
  SET_LO();

  sink16 = res;
  for(volatile uint32_t d=0; d<800000UL; ++d) {}
}