/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:04:31 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/24 16:08:48 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

std::string 	get_outfile(char *argv);
int		handle_file_error(char *argv, std::ifstream *file, std::ofstream *replace);
int		replace(std::string outfile, char **argv);
