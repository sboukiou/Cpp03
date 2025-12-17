#include <iostream>
#include "./ClapTrap.hpp"


int main(void) {
	std::cout <<  "------------------\n";
	ClapTrap	User0;
	std::cout <<  "------------------\n";
	ClapTrap	User1("Dias");
	std::cout <<  "------------------\n";
	ClapTrap	User2(User0);
	std::cout <<  "------------------\n";
	ClapTrap	User3(ClapTrap(ClapTrap("Test-User")));
	std::cout <<  "------------------\n";

	/*Setting the class properties*/
	/*Manually*/
	std::cout <<  "------------------\n";
	std::cout << "Setters to setup the Object properties\n";
	User0.setName("User 0");
	User0.setHitPoints(10);
	User0.setEnergyPoints(10);
	User0.setAttackDamage(10);
	std::cout <<  "------------------\n";

	std::cout <<  "------------------\n";
	User0.attack(" Enemy !");
	std::cout <<  "------------------\n";
	User0.takeDamage(5);
	std::cout <<  "------------------\n";
	User0.beRepaired(3);
	std::cout <<  "------------------\n";
	User3 = User0;
	std::cout <<  "------------------\n";
	std::cout << "Printing User 0 information using getters\n";
	std::cout << "[User0 name]: " << User0.getName() << std::endl;
	std::cout << "[ User0  hit points]: " << User0.getHitPoints() << std::endl;
	std::cout << "[ User0  energy points]: " << User0.getEnergyPoints() << std::endl;
	std::cout << "[ User0  attack damage]: " << User0.getAttackDamage() << std::endl;
	return (0);
}
