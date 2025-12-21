#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string &param);
		DiamondTrap(const DiamondTrap &other);
		~DiamondTrap();
		DiamondTrap& operator=(const DiamondTrap &other);
		
		void	attack(const std::string &target);
		void	whoAmI(void);
		const std::string getDiamondName(void) const;
		void		setDiamondName(const std::string &param);
};

#endif
