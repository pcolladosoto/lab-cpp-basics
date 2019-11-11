#include "Library_includes.h"
#include "Animal_class.h"
#include "Fish_class.h"
#include "Mammal_class.h"
#include "Bird_class.h"
#include "Dog_class.h"

/*
  TODO: Implement a Dog_class derived from Mammal_class
  TODO: Define an Animal_class* arr [] for 3 animals: a fish, a bird and a dog
  TODO: Allocate memory for arr
  TODO: Create a new method called how_do_i_move(). Make it a virtual one and override it in each class. We can pass the contents of arr.
  TODO: Call this method form the pointers within the array.
*/

int main(void) {

  Animal_class* animal_array[] = {new Fish_class(2, 15), new Bird_class(5.5), new Dog_class("Shin-Tzu")};

  animal_array[0]->how_do_i_move(); // Calls Fish_class' how_do_i_move()!

  Fish_class fish;
  Mammal_class mammal;
  Bird_class bird;
  Dog_class dog;

  fish.show();
  mammal.show();
  bird.show();
  dog.show();
}
