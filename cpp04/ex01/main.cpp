#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {
  const Animal *j = new Dog();
  const Animal *i = new Cat();

  delete j;
  delete i;

  std::cout << "----- Array Test -----" << std::endl;

  const int arraySize = 4;
  Animal *animals[arraySize];
  for (int k = 0; k < arraySize / 2; k++)
    animals[k] = new Dog();
  for (int k = arraySize / 2; k < arraySize; k++)
    animals[k] = new Cat();

  for (int k = 0; k < arraySize; k++)
    delete animals[k];

  std::cout << "----- Deep Copy Test -----" << std::endl;
 	Dog *test = new Dog();
	Dog *copy = new Dog(*test);

	delete test;
	delete copy;

  return 0;
}
