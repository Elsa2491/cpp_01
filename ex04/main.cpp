/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:42:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/23 16:14:18 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
	std::string outfile_name; 

	if (argc != 4)
	{
		std::cout << "Failre:\nWrong number of arguments" << std::endl;
		return (1);
	}
	if (!argv[2][0])
	{
		std::cout << "Failure:\nString to replace can't be empty" << std::endl;
		return (1);
	}
	outfile_name = get_outfile(argv[1]);
	replace(outfile_name, argv);
	return (0);
}
