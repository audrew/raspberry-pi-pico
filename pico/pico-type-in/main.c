#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  stdio_init_all();
  char buffer[1024];

  while(1) 
  {
  scanf("%1024s", buffer);
  printf("#s\n", buffer);
  sleep_ms(500);
  }
}
