// EX2_C_Add.ino
#include <avr/io.h>
#include <avr/interrupt.h>

#define PIN_MASK  (1<<PB7)
#define PIN_OUT() (DDRB  |= PIN_MASK)
#define SET_HI()  (PORTB |= PIN_MASK)
#define SET_LO()  (PORTB &= ~PIN_MASK)

const uint32_t ITERS = 6000000UL; // ~6M iterations

volatile uint8_t sink8;

void setup(){ cli(); PIN_OUT(); SET_LO(); }

void loop(){
  volatile uint8_t a = 0, b = 3;

  SET_HI();
  for(uint32_t i=0;i<ITERS;++i){
    a = a + b;                    // C addition
  }
  SET_LO();

  sink8 = a;
  for(volatile uint32_t d=0; d<800000UL; ++d) {}
}