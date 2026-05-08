/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 14:19:27 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/08 15:14:48 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_attackDamage = 0;
	_energyPoint = 10;
	_hitPoints = 10;
	std::cout << "ClapTrap constructor called\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destrcutor called\n";
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << _name << "attacks " << target << ", causing "
	<< _attackDamage << " points of damage\n";
	_energyPoint--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0 || _energyPoint <= 0)
		return ;
	_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage\n";
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0 || _energyPoint <= 0)
		return ;
	std::cout << "ClapTrap " << _name << " reapaired itself\n";
	_energyPoint--;
	_hitPoints += amount;
	return ;
}

void	ClapTrap::displayInfo(void)
{
	std::cout << _name << ": health points: " << _hitPoints
	<< ", energy points: " << _energyPoint << "\n";
	return ;
}
