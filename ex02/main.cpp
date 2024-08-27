/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:31:20 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/27 13:12:07 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	ft_display(std::string const *brain)
{
	std::cout << "Display the string using the pointer:\t\t";
	std::cout << *brain << std::endl;
}

void	ft_display(std::string const &brain)
{
	std::cout << "Display the string using the reference:\t\t"; 
	std::cout << brain << std::endl;
}

void	ft_display_addr(std::string const *brain)
{
	std::cout << "Address of the string using by stringPTR:\t";
	std::cout << brain << std::endl;
}

void	ft_display_addr(std::string const &brain)
{
	std::cout << "Address of the string using by stringREF:\t"; 
	std::cout << &brain << std::endl;
}

int	main(void)
{
	std::string	brain;
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	brain = "HI THIS IS BRAIN";
	std::cout << "Address in memory of string:\t\t\t" << &brain << std::endl;
	ft_display_addr(stringPTR);
	ft_display_addr(stringREF);
	std::cout << "Display value of the string:\t\t\t" << brain << std::endl;
	ft_display(stringPTR); 
	ft_display(stringREF);
}

/*
int	main(void)
{
	std::string	brain;
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	brain = "HI THIS IS BRAIN";
	std::cout << "Address in memory of string:\t\t\t" << &brain << std::endl;
	std::cout << "Address of the string using by stringPTR:\t" << stringPTR << std::endl;
	std::cout << "Address of the string using by stringREF:\t" << &stringREF << std::endl;
	std::cout << "Value of the string:\t\t\t" << brain << std::endl;
	std::cout << "Display the string using the pointer:\t" << *stringPTR << std::endl;
	std::cout << "Display the string using the reference:\t" << stringREF << std::endl;

}
*/


/*
//Test avec des ints

int	main(void)
{
 	int     brain;
        int     &intREF = brain;
 	int     brain1;
        int     *intPTR = &brain;

        brain = 0;
	brain1 = 0;
        std::cout << "Display the int using the reference:\t" << intREF << std::endl;
        std::cout << "Display the int using brain:\t" << brain << std::endl;
        intREF++;
        std::cout << "Display the int using brain:\t" << brain << std::endl;
        std::cout << "Display the int using the reference:\t" << intREF << std::endl;
	std::cout << std::endl;
        std::cout << "Display the int using the pointeur:\t" << *intPTR << std::endl;
        std::cout << "Display the int using brain1:\t" << brain1 << std::endl;
        intPTR++;
        std::cout << "Display the int using brain1:\t" << brain1 << std::endl;
        std::cout << "Display the int using the pointeur:\t" << *intPTR << std::endl;
}
*/
