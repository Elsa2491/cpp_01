/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:19:25 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/24 16:41:36 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{ 
	int	level_count;

	level_count = 0;
	if (level == "DEBUG") level_count = 1;
	if (level == "INFO") level_count = 2;
	if (level == "WARNING") level_count = 3;
	if (level == "ERROR") level_count = 4;
	switch (level_count)
	{
		case 1:
			std::cout << "[ DEBUG ]\n";
			debug();
			std::cout << std::endl;
		case 2:
			std::cout << "[ INFO ]\n";
			info();
			std::cout << std::endl;
		case 3:
			std::cout << "[ WARNING ]\n";
			warning();
			std::cout << std::endl;
		case 4:
			std::cout << "[ ERROR ]\n";
			error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}
