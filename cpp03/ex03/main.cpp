#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamond("Diamond");

    diamond.whoAmI();
    diamond.attack("Target");
    diamond.guardGate();
    diamond.highFivesGuys();

    return 0;
}
