/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:31:20 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/24 15:02:20 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie("Jackson");
	Zombie *zombie1 = newZombie("John");
	if (!zombie1)
		return (1);
	zombie.announce();
	zombie1->announce();
	randomChump("Jess");
	delete (zombie1);
}
