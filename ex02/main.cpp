/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:31:20 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/15 19:49:25 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	brain;
	std::string	*stringPTR;
	std::string	*stringREF;

	brain = "HI THIS IS BRAIN";
	stringPTR = &brain;
	stringREF = stringPTR;
	std::cout << "Address in memory of string:\t\t\t" << &brain << std::endl;
	std::cout << "Address of the string using by stringPTR:\t" << stringPTR << std::endl;
	std::cout << "Address of the string using by stringREF:\t" << stringREF << std::endl;
	std::cout << "Value of the string:\t\t\t" << brain << std::endl;
	std::cout << "Display the string using the pointer:\t" << *stringPTR << std::endl;
	std::cout << "Display the string using the reference:\t" << *stringREF << std::endl;

}

/*
std::string	ft_display(std::string *brain)
{
	*brain = "HI THIS IS BRAIN";
	return (*brain);
}

std::string	*ft_display_add(std::string *brain)
{
	return (brain);
}

int	main(void)
{
	std::string	brain;
	std::string	*stringPTR;
	std::string	*stringREF;

	stringPTR = &brain;
	stringREF = stringPTR;
	std::cout << "Address in memory of string:\t\t\t" << ft_display_add(&brain) << std::endl;
	std::cout << "Address of the string using by stringPTR:\t" << ft_display_add(stringPTR) << std::endl;
	std::cout << "Address of the string using by stringREF:\t" << ft_display_add(stringREF) << std::endl;
	std::cout << "Value of the string:\t\t\t" << ft_display(&brain) << std::endl;
	std::cout << "Display the string using the pointer:\t" << ft_display(stringPTR) << std::endl;
	std::cout << "Display the string using the reference:\t" << ft_display(stringREF) << std::endl;

}
*/
