/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 12:24:20 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/09 14:53:09 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap constructor's called\n";
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap's destructor called\n";
}


DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	_name = src._name;
	std::cout << "DiamondTrap copy constructor's called\n";
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
		_name = src._name;
		this->ClapTrap::_name = src.ClapTrap::_name;
		_hitPoints = src._hitPoints;
		_energyPoint = src._energyPoint;
		_attackDamage = src._attackDamage;
	}
	std::cout << "DiamondTrap' assignment operator's called\n";
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hi, my DiamondTrap name is " << _name << ", and my Clap name is " << ClapTrap::_name << std::endl;
}

