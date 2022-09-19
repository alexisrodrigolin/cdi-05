#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  int c=0;
  int i=0;

  stdio_init_all();

  gpio_init(16);
  gpio_init(17);
  gpio_init(18);
  gpio_set_dir(16, true);
  gpio_set_dir(17, true);
  gpio_set_dir(18,true);
  for(int pin=1; pin<8; pin++){
    gpio_init(pin);
    gpio_set_dir(pin, true);
  }
 
  uint8_t digitos[]={0x01, 0x4f, 0x12, 0x06, 0x4c, 0x24, 0x20, 0x0f, 0x00, 0x0c};


  while (true) {  
    if(gpio_get(18)== true){
      c=c+1;
    }
    if(gpio_get(17)== true){
      c=c-1;
    }
    if(gpio_get(16)== true){
      c=0;
    }
    sleep_ms(500);
  }
      for(int i=0;i<7;i++){
      bool val = digitos[boton] & (1<<i);
      gpio_put(i,val);   
   }
}
