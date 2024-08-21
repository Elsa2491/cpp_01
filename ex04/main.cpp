/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:42:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/21 17:05:44 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char **argv)
{
	std::string read;
	std::string file_name(argv[1]); 
	std::string extension(".replace");
	std::string outfile_name; 
	std::size_t	pos;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	outfile_name = file_name + extension;
	std::ifstream file(argv[1], std::ios::in); // peut-etre que le mode n'est pas obligatoire
	std::ofstream replace(outfile_name.c_str(), std::ios::out);
	if (!file.is_open())
	{
		std::cout << "Failed to open " << file << std::endl;
		return (1);
	}
	if (!replace.is_open())
	{
		std::cout << "Failed to open " << replace << std::endl;
		return (1);
	}
	while (std::getline(file, read))
	{
		pos = 0;
		
		while ((pos = read.find(argv[2], pos)) != std::string::npos)
		{
			replace << read.substr(0, pos);
			replace << argv[3];
			pos += strlen(argv[2]);
			read = read.substr(pos);
			pos = 0;
		}
		replace << read;
		replace << std::endl;
	}
	return (0);
}
