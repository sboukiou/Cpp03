#include <iostream>
#include "./ClapTrap.hpp"


int main(void) {
	ClapTrap	User0;
	std::string u1 = "User1";
	ClapTrap	User1(u1);
	ClapTrap	User2(User0);
	ClapTrap	User3 = User1;

	User0.setName("User 0");
	User0.setHitPoints(10);
	User0.setEnergyPoints(10);
	User0.setAttackDamage(10);

	User0.attack(" Enemy !");
	User0.takeDamage(5);
	User0.beRepaired(3);
	std::cout << "User0  " << User0.getName() << std::endl;
	std::cout << "User0  " << User0.getHitPoints() << std::endl;
	std::cout << "User0  " << User0.getEnergyPoints() << std::endl;
	std::cout << "User0  " << User0.getAttackDamage() << std::endl;
	return (0);
}
