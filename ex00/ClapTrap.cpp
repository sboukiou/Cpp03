#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(void):
	name("DEFAULT"),
	hitPoints(0),
	energyPoints(0),
	attackDamage(0) {
		std::cout << "[INFO]: (Default Constructor Called for " << getName() << ")\n";
	}

ClapTrap::ClapTrap(const std::string &param):
	name(param),
	hitPoints(0),
	energyPoints(0),
	attackDamage(0) {
		std::cout << "[INFO]: (Parameterized Constructor Called for " << getName() << ")\n";
		}

ClapTrap::ClapTrap(const ClapTrap &other) {
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
		std::cout << "[INFO]: (Copy Constructor Called for " << getName() << ")\n";
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other) {
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	std::cout << "[INFO]: (Assignment operator Constructor Called for " << getName() << ")\n";
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "[INFO]: (Destructor called for: " << getName() << ")\n";
}

void	ClapTrap::attack(const std::string &target) {
	if (energyPoints > 0 && hitPoints > 0) {
		std::cout << "ClapTrap " << name <<  " attacks " << target << " , causing " << attackDamage << " points of damage!\n";
		energyPoints -= 1;
	}
	else
		std::cout << "ClapTrap " << name << " was not able to attack\n";
}

void	ClapTrap::takeDamage(const unsigned int &param) {
	std::cout << "ClapTrap " << name <<  " was attacked  , and has lost  " << param << " points!\n";
	if (getEnergyPoints() > 0)
		setEnergyPoints(getEnergyPoints() - param);
}

void	ClapTrap::beRepaired(const unsigned int &param) {
	if (energyPoints > 0)
		std::cout << "ClapTrap " << name <<  " is repairing " << param << " points\n";
	energyPoints -= 1;
}

std::string	ClapTrap::getName(void) const { return (name); }
unsigned int	ClapTrap::getHitPoints(void) const { return (hitPoints); }
unsigned int	ClapTrap::getEnergyPoints(void) const { return (energyPoints); }
unsigned int	ClapTrap::getAttackDamage(void) const { return (attackDamage); }

void	ClapTrap::setName(const std::string &param) { name = param; }
void	ClapTrap::setHitPoints(const unsigned int &param) { hitPoints = param; }
void	ClapTrap::setEnergyPoints(const unsigned int &param) { energyPoints = param; }
void	ClapTrap::setAttackDamage(const unsigned int &param) { attackDamage = param; }
