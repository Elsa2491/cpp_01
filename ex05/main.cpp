/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:37:53 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/24 16:34:58 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*
int	main(void)
{
	Harl harl;
	std::string level;
	std::cout << "Welcome and nice to meet you Harl!\n"
	<< "Please complain: DEBUG, INFO, WARNING, ERROR" << std::endl;
	while (std::getline(std::cin, level))
	{
		if (!level.compare("WARNING") || !level.compare("DEBUG") || !level.compare("INFO") || !level.compare("ERROR"))
		{
			harl.complain(level);
			return (0);
		}
		else
			std::cout << "I don't understand. Please try again" << std::endl;
	}
}
*/

int main(void)
{
	Harl harl;
	std::string level;

	std::cout << "Welcome and nice to meet you Harl!\n"
	<< "Please complain: DEBUG, INFO, WARNING, ERROR" << std::endl;
	std::cin >> level;
	harl.complain(level);
}
