#include "Cat.hpp"

Cat::Cat() {
  this->type = "Cat";
  this->brain = new Brain();
  std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other) {
  this->type = other.type;
  this->brain = new Brain(*other.brain);
  std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
  std::cout << "Cat assignment operator called" << std::endl;
  if (this != &other) {
    AAnimal::operator=(other);
    *this->brain = *other.brain;
  }
  return *this;
}

Cat::~Cat() {
  delete this->brain;
  std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const { std::cout << "Meow" << std::endl; }
