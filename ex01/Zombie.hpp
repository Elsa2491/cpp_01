/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:32:28 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/16 15:02:42 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

# define NB 5

class 	Zombie 
{

	std::string _name;

public:
	std::string _name2;
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
	void	setName(std::string);
};

Zombie* zombieHorde(int N, std::string name);

#endif
