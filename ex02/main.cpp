#include <iostream>
#include "./FragTrap.hpp"


int main(void) {
	std::cout <<  "------------------\n";
	FragTrap	User0;
	std::cout <<  "------------------\n";
	FragTrap	User1("Dias");
	std::cout <<  "------------------\n";
	FragTrap	User2(User0);
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
	User0.attack(" Enemy !");
	std::cout << "Attacking with 0 hit  pts left:\n";
	User0.setHitPoints(0);
	User0.attack(" Enemy !");
	std::cout <<  "------------------\n";
	User0.beRepaired(3);
	std::cout <<  "------------------\n";
	std::cout <<  "------------------\n";
	std::cout << "Printing User 0 information using getters\n";
	std::cout << "[User0 name]: " << User0.getName() << std::endl;
	std::cout << "[ User0  hit points]: " << User0.getHitPoints() << std::endl;
	std::cout << "[ User0  energy points]: " << User0.getEnergyPoints() << std::endl;
	std::cout << "[ User0  attack damage]: " << User0.getAttackDamage() << std::endl;
	std::cout <<  "------------------\n";
	std::cout <<  "New Class Feature\n";
	std::cout <<  "------------------\n";
	User0.highFivesGuys();

	return (0);
}
