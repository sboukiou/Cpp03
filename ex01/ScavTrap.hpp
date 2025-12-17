#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP


# include "./ClapTrap.hpp"


class ScavTrap: public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(ScavTrap &other);
		ScavTrap	&operator=(ScavTrap &other);
		~ScavTrap();

		void	attack(const std::string &target);
	void	guardGate(void);
};

#endif
