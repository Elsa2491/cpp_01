/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:01:11 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/23 14:18:10 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	try
	{
		Zombie* zombie = new Zombie[N];
		for (int i = 0; i < N; i++)
			zombie[i].setName(name);
		return (zombie);
	}
	catch (std::bad_alloc& ba)
	{
		std::cerr << "bad_alloc caught: " << ba.what() << std::endl;
		return (NULL);
	}
}
