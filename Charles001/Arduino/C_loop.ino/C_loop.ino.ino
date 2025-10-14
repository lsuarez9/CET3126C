// EX3_ASM_NopLoop.ino
#include <avr/io.h>
#include <avr/interrupt.h>

#define PIN_MASK  (1<<PB7)
#define PIN_OUT() (DDRB  |= PIN_MASK)
#define SET_HI()  (PORTB |= PIN_MASK)
#define SET_LO()  (PORTB &= ~PIN_MASK)

const uint32_t ITERS = 10000000UL;

void setup(){ cli(); PIN_OUT(); SET_LO(); }

void loop(){
  const uint16_t OUT = (ITERS/65535UL);

  SET_HI();
  for(uint16_t outer=0; outer<OUT; ++outer){
    asm volatile(
      "ldi  r30, 0xFF   \n\t"   // Z = 65535
      "ldi  r31, 0xFF   \n\t"
      "1:               \n\t"
      "nop              \n\t"   // 1-cycle body
      "sbiw r30, 1      \n\t"
      "brne 1b          \n\t"
      :
      :
      : "r30","r31","cc"
    );
  }
  SET_LO();

  for(volatile uint32_t d=0; d<800000UL; ++d) {}
}