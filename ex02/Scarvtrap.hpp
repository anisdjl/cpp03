/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scarvtrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:16:56 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/08 16:53:28 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScravTrap : public ClapTrap
{
	public: 
		ScravTrap(std::string name);
		~ScravTrap(void);
		ScravTrap(const ScravTrap &src);
		ScravTrap	&operator=(const ScravTrap &src);
		void	guardGate(void);
		void	attack(const std::string &target);
};

#endif