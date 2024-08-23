/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:37:53 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/23 18:11:36 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	int	level_count;

	if (argc != 2)
	{
		std::cout << "Failure:\nWrong number of arguments" << std::endl;
		return (1);
	}

	std::string level(argv[1]);
	level_count = 0;
	if (level == "DEBUG") level_count = 1;
	if (level == "INFO") level_count = 2;
	if (level == "WARNING") level_count = 3;
	if (level == "ERROR") level_count = 4;
	switch (level_count)
	{
		case 1:
			std::cout << "[ DEBUG ]\n";
			harl.complain("DEBUG");
			std::cout << std::endl;
		case 2:
			std::cout << "[ INFO ]\n";
			harl.complain("INFO");
			std::cout << std::endl;
		case 3:
			std::cout << "[ WARNING ]\n";
			harl.complain("WARNING");
			std::cout << std::endl;
		case 4:
			std::cout << "[ ERROR ]\n";
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}
