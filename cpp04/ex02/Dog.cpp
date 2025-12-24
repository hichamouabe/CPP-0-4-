#include "Dog.hpp"

Dog::Dog() {
  this->type = "Dog";
  this->brain = new Brain();
  std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other) {
  this->type = other.type;
  this->brain = new Brain(*other.brain);
  std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
  std::cout << "Dog assignment operator called" << std::endl;
  if (this != &other) {
    AAnimal::operator=(other);
    *this->brain = *other.brain;
  }
  return *this;
}

Dog::~Dog() {
  delete this->brain;
  std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const { std::cout << "Woof" << std::endl; }
