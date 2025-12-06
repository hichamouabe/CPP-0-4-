#include "Zombie.hpp"

#define N 9

int main()
{
	Zombie* horde = ZombieHorde(N, "Clone");

	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}
