/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:42:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/23 16:14:50 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string get_outfile(char *argv)
{
	std::string file_name(argv); 
	std::string extension(".replace");
	return (file_name + extension);
}

void	handle_file_error(char *argv, std::ifstream *file, std::ofstream *replace)
{
	if (!file->is_open())
	{
		std::cout << "Failed to open " << argv << std::endl;
		return ;
	}
	if (!replace->is_open())
	{
		std::cout << "Failed to open " << *replace << std::endl;
		return ;
	}
}

void	replace(std::string outfile, char **argv)
{
	std::string read;
	std::size_t	pos;

	std::ifstream file(argv[1], std::ios::in);
	std::ofstream replace(outfile.c_str(), std::ios::out);
	handle_file_error(argv[1], &file, &replace);
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
}
