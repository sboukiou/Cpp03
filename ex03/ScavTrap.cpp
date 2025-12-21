#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {
	std::cout << "[INFO]: ScavTrap initiated (Basic)\n";
	setName("DEFAULT-NAME");
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const std::string &param): ClapTrap(param) {
	setName(param);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "[INFO]: ScavTrap initiated (Basic)\n";
}

ScavTrap::ScavTrap(ScavTrap &other): ClapTrap(other) {
	setName(other.getName());
	setHitPoints(other.getHitPoints());
	setEnergyPoints(other.getEnergyPoints());
	setAttackDamage(other.getAttackDamage());
	std::cout << "[INFO]: ScavTrap initiated (Copy Construction)\n";
}

ScavTrap	&ScavTrap::operator=(ScavTrap &other) {
	setName(other.getName());
	setHitPoints(other.getHitPoints());
	setEnergyPoints(other.getEnergyPoints());
	setAttackDamage(other.getAttackDamage());
	std::cout << "[INFO]: ScavTrap initiated (Assignment operator)\n";
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "[INFO]: ScavTrap Destruction\n";
}

void	ScavTrap::attack(const std::string &target) {
	if (getEnergyPoints() > 0 && getHitPoints() > 0)
		std::cout << "[INFO]: ScavTrap " << getName() << " is attacking the target [" << target << "]\n";
	else
		std::cout << "[INFO]: ScavTrap " << getName() << " is not able to attack\n";
}

void	ScavTrap::guardGate(void) {
	std::cout << "[INFO]: ScavTrap is now in the gate keeper mode\n";
}
