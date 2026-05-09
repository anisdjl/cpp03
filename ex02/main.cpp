/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 14:19:38 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/09 14:45:01 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Scavtrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap Anis = FragTrap("Anis");
	FragTrap Evan = FragTrap("Evan");
	
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
	Anis.highFiveGuys();
	
	return (0);
}
