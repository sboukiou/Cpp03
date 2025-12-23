#include "./DiamondTrap.hpp"
#include <iostream>
#include <cstdlib>


DiamondTrap::DiamondTrap(): ClapTrap("[Default](clapTrapDefault)") {
	DiamondTrap::name = "[Default]";
	setHitPoints(FragTrap::getHitPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "[INFO]: DiamondTrap default-const called\n";
	if (std::cout.fail()) {
		std::cerr << "Failed to write!\n";
		exit(0);
	}
}


DiamondTrap::DiamondTrap(const std::string& param): ClapTrap(param + "_ClapTrap") {
	DiamondTrap::name = param;
	setHitPoints(FragTrap::getHitPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "[INFO]: DiamondTrap copy-const called\n";
	if (std::cout.fail()) {
		std::cerr << "Failed to write!\n";
		exit(0);
	}
}

DiamondTrap::DiamondTrap(const DiamondTrap& param): ClapTrap(param.getDiamondName() + ClapTrap::getName()) {
	DiamondTrap::name = param.getDiamondName();
	setHitPoints(FragTrap::getHitPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "[INFO]: DiamondTrap copy-const called\n";
	if (std::cout.fail()) {
		std::cerr << "Failed to write!\n";
		exit(0);
	}
}

DiamondTrap::~DiamondTrap() {
	std::cout << "[INFO]: DiamondTrap Destructor called\n";
	if (std::cout.fail()) {
		std::cerr << "Failed to write!\n";
		exit(0);
	}
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& param) {
	ClapTrap::setName(param.getDiamondName() + ClapTrap::getName());
	DiamondTrap::name = param.getDiamondName();
	setHitPoints(FragTrap::getHitPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "[INFO]: Assignment operator overload called\n";
	if (std::cout.fail()) {
		std::cerr << "Failed to write!\n";
		exit(0);
	}
	return (*this);
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
		std::cout << "[FEAT]: Diamond Name: " << DiamondTrap::name << "\n";
		std::cout << "[FEAT]: ClapTrap Name: " << ClapTrap::getName() << "\n";
		if (std::cout.fail()) {
			std::cerr << "Failed to write!\n";
			exit(0);
		}
}

const std::string	DiamondTrap::getDiamondName(void) const {
	return (DiamondTrap::name);
}
void	DiamondTrap::setDiamondName(const std::string &param) {
	DiamondTrap::name = param;
}
