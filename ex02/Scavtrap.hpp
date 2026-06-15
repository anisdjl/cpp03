/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:16:56 by adjelili          #+#    #+#             */
/*   Updated: 2026/06/15 14:18:34 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public: 
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &src);
		ScavTrap	&operator=(const ScavTrap &src);
		void	guardGate(void);
		void	attack(const std::string &target);
};

#endif