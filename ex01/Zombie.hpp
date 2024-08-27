/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:32:28 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/24 20:14:19 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

# define ZOMBIES_MAX 5

class 	Zombie 
{
	std::string _name;

public:
	Zombie(void);
	~Zombie(void);
	void	announce(void);
	void	setName(std::string);
};

Zombie* zombieHorde(int N, std::string name);
