/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 17:52:46 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/08 18:11:03 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap's constructor called\n";
	_energyPoint = 100;
	_attackDamage = 30;
	_hitPoints = 100;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap's destructor called\n";
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "FragTrap's copy constructor called\n";
	*this = src;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
		ClapTrap::operator=(src);
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << _name << " requests a high-five\n";
}
