/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:12:40 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/23 11:33:19 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Statique allocation -> stack
void	randomChump(std::string name)
{
	Zombie	zombie(name);
	zombie.announce();
}

