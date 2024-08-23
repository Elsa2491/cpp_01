/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:31:20 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/23 14:16:42 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("")
{
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is destroyed" << std::endl;
}

int	main(void)
{
	Zombie *zombie = zombieHorde(ZOMBIES_MAX, "John");
	for (int i = 0; i < ZOMBIES_MAX; i++)
		zombie[i].announce();
	delete[] zombie;
}
