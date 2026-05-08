/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 18:20:41 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/08 18:43:21 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "Scarvtrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScravTrap, public FragTrap
{
	private:
		std::string _name;
		
	public:
		void	whoAmI(void);
};


#endif