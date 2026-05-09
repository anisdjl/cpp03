/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 18:20:41 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/09 14:52:01 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "Scavtrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
		
	public:
		void	whoAmI(void);
		DiamondTrap(std::string name);
		~DiamondTrap(void);
		using ScavTrap::attack;
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap	&operator=(const DiamondTrap &src);
};


#endif