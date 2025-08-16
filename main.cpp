#include <stdio.h>
#include <ncurses.h>

#include "src/creatureslib.h"
#include "src/speciesenum.h"

int main() {
  creature Player(species::NONE);
  printf("Size of Player Class: %lu\n", sizeof(Player));
  printf("Testing. Hello World!\n");
  return 0;
}
