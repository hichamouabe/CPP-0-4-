#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    FragTrap frag("Fraggy");

    frag.attack("Target");
    frag.takeDamage(20);
    frag.beRepaired(10);
    frag.highFivesGuys();

    return 0;
}
