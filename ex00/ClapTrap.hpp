#include <iostream>


class ClapTrap {
	private:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;

	public:
		ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap	&other);
		ClapTrap	&operator=(const ClapTrap &other);
		~ClapTrap();
		void	attack(const std::string &target);
		void	takeDamage(const unsigned int &amount);
		void	beRepaired(const unsigned int &amount);

		std::string		getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getAttackDamage(void) const;
		void			setName(const std::string &param);
		void			setHitPoints(const unsigned int &param);
		void			setEnergyPoints(const unsigned int &param);
		void			setAttackDamage(const unsigned int &param);

};
