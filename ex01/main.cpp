/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 14:19:38 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/09 14:44:36 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Scavtrap.hpp"

int main(void)
{
	ScavTrap Anis = ScavTrap("Anis");
	ScavTrap Evan = ScavTrap("Evan");
	
	Anis.displayInfo();
	Evan.displayInfo();
	
	Anis.attack("Evan");
	Evan.takeDamage(0);
	
	Anis.displayInfo();
	Evan.displayInfo();
	
	Evan.attack("Anis");
	Anis.takeDamage(0);
	
	Anis.displayInfo();
	Evan.displayInfo();
	
	Anis.beRepaired(1);
	Evan.beRepaired(1);

	Anis.displayInfo();
	Evan.displayInfo();
	Anis.guardGate();
	return (0);
}
