/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:31:38 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/23 19:27:46 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	std::string	_name;
	Weapon		&_weapon;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	std::string setName(std::string name);
	std::string getName(void) const;
	void	attack(void);
};
