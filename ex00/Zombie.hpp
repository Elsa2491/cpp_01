/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:32:28 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/14 12:26:40 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

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

#endif
