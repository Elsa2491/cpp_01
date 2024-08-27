/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:42:33 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/24 16:08:28 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string get_outfile(char *argv)
{
	std::string file_name(argv); 
	std::string extension(".replace");
	return (file_name + extension);
}

int	handle_file_error(char *argv, std::ifstream *file)
{
	if (!file->is_open())
	{
		std::cout << "Error\nFailed to open " << argv << std::endl;
		std::cout << argv << ".replace was not created" << std::endl;
		return (1);
	}
	return (0);
}

int	handle_replace_error(std::ifstream *file, std::ofstream *replace)
{
	if (!replace->is_open())
	{
		std::cout << "Error\nFailed to open " << *replace << std::endl;
		file->close();
		return (1);
	}
	return (0);
}

int	replace(std::string outfile, char **argv)
{
	std::string read;
	std::size_t	pos;

	std::ifstream file(argv[1], std::ios::in);
	if (handle_file_error(argv[1], &file))
		return (1);
	std::ofstream replace(outfile.c_str(), std::ios::out);
	if (handle_replace_error(&file, &replace))
		return (1);
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
