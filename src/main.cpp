#include <ncurses.h>

#include "entitylib.hpp"

int main() {
  Creature player(BIRD, 40, 50);

  player.printSpecies();
  player.getPos();
  return 0;
}
