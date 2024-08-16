/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:31:38 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/16 17:49:11 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanB(std::string name);
	~HumanB(void);
	void setName(std::string name);
	void setWeapon(Weapon &weapon);
	std::string getName(void) const;
	void	attack(void);
};
