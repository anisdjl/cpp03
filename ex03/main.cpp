/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 14:19:38 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/09 15:02:02 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Scavtrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap Anis = DiamondTrap("Anis");
	DiamondTrap Evan = DiamondTrap("Evan");
	
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
	
	Anis.whoAmI();
	
	return (0);
}


/*int main(void)
{
    std::cout << "--- CREATION ---" << std::endl;
    DiamondTrap monster("Némésis");
    
    std::cout << "\n--- TEST DES STATS ---" << std::endl;
    monster.whoAmI();
    // Doit afficher : HP 100 (Frag), Energy 50 (Scav), AD 30 (Frag)
    
    std::cout << "\n--- TEST ENERGIE (L'épuisement) ---" << std::endl;
    // On force 51 attaques pour vider les 50 points d'énergie
    for (int i = 0; i < 51; i++) {
        std::cout << i + 1 << " ";
        monster.attack("un mannequin");
    }

    std::cout << "\n--- TEST REPARATION SANS ENERGIE ---" << std::endl;
    monster.beRepaired(10); // Ne doit RIEN faire car 0 energy

    std::cout << "\n--- TEST MORT ET OVERFLOW ---" << std::endl;
    // On crée un nouveau pour tester les dégâts
    DiamondTrap target("Cible");
    target.takeDamage(100); // Meurt
    target.takeDamage(50);  // Ne doit pas passer à 4 milliards de PV
    target.beRepaired(10);  // Ne doit pas ressusciter

    std::cout << "\n--- TEST COPIE ET ASSIGNATION ---" << std::endl;
    DiamondTrap copy(monster);
    copy.whoAmI();
    
    std::cout << "\n--- DESTRUCTIONS ---" << std::endl;
    return (0);
}*/