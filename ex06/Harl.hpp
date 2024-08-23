/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <eltouma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:09:20 by eltouma           #+#    #+#             */
/*   Updated: 2024/08/23 17:33:44 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

# include <string>
# include <cstring>
# include <iostream>

# define COMPLAIN_NB 5
class Harl
{
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	misunderstand(void);

public:
	Harl(void);
	~Harl(void);
	void	complain(std::string level);
};
