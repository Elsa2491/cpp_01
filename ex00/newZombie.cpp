/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:52:09 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/24 16:44:41 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	try
	{
		return (new Zombie(name));
	}
	catch (std::bad_alloc& ba)
	{
		std::cerr << "bad_alloc caught: " << ba.what() << std::endl;
		return (NULL);
	}
}

/*
Zombie* newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name);
	return (zombie);
}
*/
