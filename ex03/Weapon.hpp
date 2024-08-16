/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:31:38 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/16 17:05:09 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <string>
#include <iostream>

class 	Weapon
{
	std::string	_type;

public:
	Weapon(std::string type);
	~Weapon(void);
	void		setType(std::string type);
	std::string	getType(void) const;
};
