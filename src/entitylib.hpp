#ifndef CREATUREHEADER_H
#define CREATUREHEADER_H

#include <stdint.h>
#include <stdio.h>
#include <string>

enum species : uint8_t {
  NONE = 0,
  HUMAN = 1,
  DRAGON = 2,
  BIRD = 3
};

class Creature {
public:
  uint8_t head;
  uint8_t torso;
  uint8_t arms;
  uint8_t legs;
  uint8_t tail;
  std::string name;

  int y = 0;
  int x = 0;

  Creature(std::string newName, uint8_t species) {
    head = torso = arms = legs = tail = species;
    name = newName;
  }

  Creature(std::string newName, uint8_t species, int y_pos, int x_pos) {
    head = torso = arms = legs = tail = species;
    y = y_pos;
    x = x_pos;
    name = newName;
  }

  void getPos() {
    printf("Y: %d, X: %d\n", y, x);
  };
  void printSpecies() {
    printf("%s has a ", name.c_str());
    switch (head) {
      case NONE:
        printf("missing ");
        break;
      case HUMAN:
        printf("Human ");
        break;
      case DRAGON:
        printf("Dragon ");
        break;
      case BIRD:
        printf("Bird ");
        break;
      default:
        printf("Mysterious ");
        break;
    }
    printf("head. \n");
  }

private:
};

#endif //CREATUREHEADER_H
