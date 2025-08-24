#include <ncurses.h>

#include "entitylib.hpp"
#include "itemlib.hpp"

int main() {
  Creature player("Damien", HUMAN, 40, 50);
  Potion invPotion("Bird Potion", 5, BIRD);
  player.printSpecies();
  player.getPos();
  
  invPotion.useItem(player);
  player.printSpecies();

  return 0;
}
