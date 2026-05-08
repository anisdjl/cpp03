/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:19:44 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/08 18:05:33 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scarvtrap.hpp"

ScravTrap::ScravTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "ScravTrap constructor called\n";
}

ScravTrap::~ScravTrap(void)
{
	std::cout << "ScravTrap destructor called\n";
}

ScravTrap::ScravTrap(const ScravTrap &src) : ClapTrap(src)
{
	std::cout << "ScravTrap's copy constructor called\n";
	*this = src;	
}

void	ScravTrap::guardGate(void)
{
	std::cout << "ScarvTrap " << _name << " enters in gate keeper mode\n";
}

void	ScravTrap::attack(const std::string &target)
{
	std::cout << "ScravTrap " << _name << " attacks " << target << ", causing "
	<< _attackDamage << " points of damage\n";
	_energyPoint--;
}

ScravTrap	&ScravTrap::operator=(const ScravTrap &src)
{
	std::cout << "ScravTrap assignement constructor called\n";
	if (this != &src)
		ClapTrap::operator=(src);
	return (*this);
}
