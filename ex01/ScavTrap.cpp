/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:19:44 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/09 14:58:07 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap constructor's called\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor's called\n";
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor's called\n";
	*this = src;	
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " enters in gate keeper mode\n";
}

void	ScavTrap::attack(const std::string &target)
{
	if (_energyPoint <= 0)
	{
		std::cout << "ScavTrap can't attack, not enough energy...\n";
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
	<< _attackDamage << " points of damage\n";
	_energyPoint--;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap assignement constructor's called\n";
	if (this != &src)
		ClapTrap::operator=(src);
	return (*this);
}
