#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {
	std::cout << "ScavTrap initiated (Basic)\n";
}

ScavTrap::ScavTrap(ScavTrap &other): ClapTrap(other) {
	(void)other;
	std::cout << "ScavTrap initiated (Copy Construction)\n";
}

ScavTrap	&ScavTrap::operator=(ScavTrap &other) {
	(void)other;
	std::cout << "ScavTrap initiated (Assignment operator)\n";
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "Destruction\n";
}

void	ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap is attacking the target [" << target << "]\n";
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap is now in the gate keeper mode\n";
}
