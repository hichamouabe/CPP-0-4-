#include "ClapTrap.hpp"

int main() {
    ClapTrap robotA("RobotA");
    ClapTrap robotB("RobotB");

    robotA.attack("Target1");
    robotA.takeDamage(5);
    robotA.beRepaired(3);
    robotA.takeDamage(10);
    robotA.beRepaired(5);
    robotA.attack("Target2");

    return 0;
}
