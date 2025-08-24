#ifndef ITEMLIB_H
#define ITEMLIB_H

#include <stdio.h>
#include <string>

#include "entitylib.hpp"

class Item {
public:
  std::string itemName;
  uint8_t maxStack;
private:

};

class Potion : public Item {
public:
  uint8_t tfSpecies;

  Potion() {
    itemName = "Dragon Potion";
    maxStack = 4;
    tfSpecies = DRAGON;
  }

  Potion(std::string newItemName, uint8_t stackSize, uint8_t speciesTarget) {
    itemName = newItemName;
    maxStack = stackSize;
    tfSpecies = speciesTarget;
  }

  void useItem(Creature& targObj) {
    printf("%s used the %s.\n", targObj.name.c_str(), itemName.c_str());
    targObj.head = tfSpecies;
  }

private:
};

#endif //ITEMLIB_H
