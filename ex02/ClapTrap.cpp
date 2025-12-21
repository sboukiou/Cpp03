#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	name = "";
	hitPoints = 0;
	energyPoints = 0;
	attackDamage = 0;
	std::cout << "ClapTrap initiated (Basic)\n";
}

ClapTrap::ClapTrap(std::string &param): hitPoints(0),
	energyPoints(0),
	attackDamage(0) {
		name = param;
	std::cout << "ClapTrap initiated (Parameterized construction)\n";
}

ClapTrap::ClapTrap(ClapTrap &other) {
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	std::cout << "ClapTrap initiated (Copy Construction)\n";
}

ClapTrap	&ClapTrap::operator=(ClapTrap &other) {
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	std::cout << "ClapTrap initiated (Assignment operator)\n";
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destruction\n";
}

void	ClapTrap::attack(const std::string &target) {
	if (energyPoints > 0)
		std::cout << "ClapTrap " << name <<  " attacks " << target << " , causing " << attackDamage << " points of damage!\n";
	energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int param) {
	std::cout << "ClapTrap " << name <<  " was attacked  , and has lost  " << param << " points of damage!\n";
	setEnergyPoints(getEnergyPoints() - param);
}

void	ClapTrap::beRepaired(unsigned int param) {
	if (energyPoints > 0)
		std::cout << "ClapTrap " << name <<  " is repairing " << param << " points\n";
	energyPoints -= 1;
}

std::string	ClapTrap::getName(void) const { return (name); }
unsigned int	ClapTrap::getHitPoints(void) const { return (hitPoints); }
unsigned int	ClapTrap::getEnergyPoints(void) const { return (energyPoints); }
unsigned int	ClapTrap::getAttackDamage(void) const { return (attackDamage); }

void	ClapTrap::setName(std::string param) { name = param; }
void	ClapTrap::setHitPoints(unsigned int param) { hitPoints = param; }
void	ClapTrap::setEnergyPoints(unsigned int param) { energyPoints = param; }
void	ClapTrap::setAttackDamage(unsigned int param) { attackDamage = param; }
