/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:31:20 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/16 15:01:17 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("")
{
}

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is destroyed" << std::endl;
}

int	main(void)
{
	Zombie *zombie = zombieHorde(NB, "John");
	for (int i = 0; i < NB; i++)
		zombie[i].announce();
	delete [] zombie;
}
