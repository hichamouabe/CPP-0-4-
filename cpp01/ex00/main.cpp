#include "Zombie.hpp"

int main()
{
	randomChump("STACKZOMBIE");

	Zombie* heapone = newZombie("HEAPZOMBIE");
	heapone->announce();

	delete heapone;
}
