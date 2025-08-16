#include <stdio.h>

#include "src/speciesenum.h"

class creature {
  public:
    uint8_t head;
    uint8_t torso;
    uint8_t arms;
    uint8_t legs;
    uint8_t butt;

    int y;
    int x;
    
    creature(uint8_t type) {
      head = torso = arms = legs = butt = type;
      y = x = 0;
    }
  private:

};
