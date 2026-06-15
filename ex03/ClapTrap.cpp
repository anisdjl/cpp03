/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 14:19:27 by adjelili          #+#    #+#             */
/*   Updated: 2026/06/15 15:56:09 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_attackDamage = 0;
	_energyPoint = 10;
	_hitPoints = 10;
	std::cout << "ClapTrap constructor's called\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destrcutor's called\n";
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap copy constructor's called\n";
	*this = src;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap assignement constructor's called\n";
	if (this != &src)
	{
		_name = src._name;
		_energyPoint = src._energyPoint;
		_hitPoints = src._hitPoints;
		_attackDamage = src._attackDamage;
	}
	return (*this);
}


void	ClapTrap::attack(const std::string &target)
{
	if (_hitPoints <= 0 || _energyPoint <= 0)
	{
		std::cout << "Can't attack...not enough energy\n";
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
	<< _attackDamage << " points of damage\n";
	_energyPoint--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already destroyed\n";
		return ;
	}
	if (amount >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage\n";
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0 || _energyPoint <= 0)
	{
		std::cout << "Can't be repaired...not enough energy\n";
		return ;
	}
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
