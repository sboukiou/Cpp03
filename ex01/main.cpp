#include <iostream>
#include "./ScavTrap.hpp"


int main(void) {
	std::cout <<  "------------------\n";
	ScavTrap	User0;
	std::string u1 = "User1";
	std::cout <<  "------------------\n";
	std::cout <<  "------------------\n";
	ScavTrap	User2(User0);
	std::cout <<  "------------------\n";
	std::cout <<  "------------------\n";

	User0.setName("User 0");
	User0.setHitPoints(10);
	User0.setEnergyPoints(10);
	User0.setAttackDamage(10);

	User0.attack(" Enemy !");
	User0.takeDamage(5);
	User0.beRepaired(3);
	std::cout <<  "------------------\n";
	std::cout <<  "------------------\n";
	std::cout << "User0  " << User0.getName() << std::endl;
	std::cout << "User0  " << User0.getHitPoints() << std::endl;
	std::cout << "User0  " << User0.getEnergyPoints() << std::endl;
	std::cout << "User0  " << User0.getAttackDamage() << std::endl;
	return (0);
}
