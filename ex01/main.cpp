/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:31:20 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/24 15:05:51 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie = zombieHorde(ZOMBIES_MAX, "John");
	if (!zombie)
		return (1);
	for (int i = 0; i < ZOMBIES_MAX; i++)
		zombie[i].announce();
	delete[] zombie;
}
