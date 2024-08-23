/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:32:28 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/23 12:18:37 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

void	randomChump(std::string name);

class 	Zombie 
{
	std::string _name;

public:
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
};

Zombie* newZombie(std::string name);
