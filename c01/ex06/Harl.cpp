/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:03:53 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/24 16:23:14 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void): _level("DEBUG")
{
	this->init_message();
}
Harl::Harl(std::string level): _level(level)
{
	this->init_message();
}

void	Harl::complain( std::string level )
{
	int		i;
	bool	check;
	
	i = 0;
	check = 0;
	while (this->_message[i].level != level && i < 4)
	{
		if (this->_message[i].level == this->_level)
			check = 1;
		i++;
	}
	if (i < 4 && (check || this->_message[i].level == this->_level))
		(this->*_message[i].f)();
}

void	Harl::init_message(void)
{
	this->_message[0] = (struct _s_message){.level = "DEBUG", .f = &Harl::debug};
	this->_message[1] = (struct _s_message){.level = "INFO", .f = &Harl::info};
	this->_message[2] = (struct _s_message){.level = "WARNING", .f = &Harl::warning};
	this->_message[3] = (struct _s_message){.level = "ERROR", .f = &Harl::error};
}


void	Harl::debug( void )
{
	std::cout << "[Debug] Message." << std::endl;
}
void	Harl::info( void )
{
	std::cout << "[Info] Message." << std::endl;
}
void	Harl::warning( void )
{
	std::cout << "[Warning] Message." << std::endl;
}
void	Harl::error( void )
{
	std::cout << "[Error] Message." << std::endl;
}
