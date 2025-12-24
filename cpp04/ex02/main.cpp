#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {
  const AAnimal *j = new Dog();
  const AAnimal *i = new Cat();

  delete j;
  delete i;

  std::cout << "----- Array Test -----" << std::endl;

  const int arraySize = 4;
  AAnimal *animals[arraySize];
  for (int k = 0; k < arraySize / 2; k++)
    animals[k] = new Dog();
  for (int k = arraySize / 2; k < arraySize; k++)
    animals[k] = new Cat();

  for (int k = 0; k < arraySize; k++)
    delete animals[k];

  return 0;
}
