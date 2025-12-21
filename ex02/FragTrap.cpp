#include "./FragTrap.hpp"
#include <iostream>
#include <cstdlib>

#define WRITE_FAIL 1

FragTrap::FragTrap() {
	setName("DEFAULT-NAME");
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "[INFO]: Default Constructor (FragTrap)\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: Failed to write!\n";
		std::exit(WRITE_FAIL);
	}
}

FragTrap::FragTrap(const std::string &name) {
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "[INFO]: Parameterized Constructor (FragTrap)\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: Failed to write!\n";
		exit(WRITE_FAIL);
	}
}

FragTrap::FragTrap(const FragTrap &other) {
	setName(other.getName());
	setHitPoints(other.getHitPoints());
	setEnergyPoints(other.getEnergyPoints());
	setAttackDamage(other.getAttackDamage());
	std::cout << "[INFO]: Copy  Constructor (FragTrap)\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: Failed to write!\n";
		exit(WRITE_FAIL);
	}
}

FragTrap::~FragTrap() {
	std::cout << "[INFO]:   Destructor (FragTrap)\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: Failed to write!\n";
		exit(WRITE_FAIL);
	}
}

FragTrap&	FragTrap::operator=(const FragTrap &other) {
	setName(other.getName());
	setHitPoints(other.getHitPoints());
	setEnergyPoints(other.getEnergyPoints());
	setAttackDamage(other.getAttackDamage());
	std::cout << "[INFO]: Assignement oeprator  Constructor (FragTrap)\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: Failed to write!\n";
		exit(WRITE_FAIL);
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "[FEAT]: Fragtrap ( " << getName() << ") requests a salut\n";
	if (std::cout.fail()) {
		std::cerr << "[ERR]: Failed to write!\n";
		exit(WRITE_FAIL);
	}
}
