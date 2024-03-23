/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:03:53 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/23 21:25:54 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain( std::string level )
{
	int		i;
	bool	check;
	
	i = 0;
	check = 0;
	while (this->message[i].level != level && i < 4)
	{
		if (this->message[i].level == this->_level)
			check = 1;
		i++;
	}
	if (i < 4 && (check || this->message[i].level == this->_level))
		(this->*message[i].f)();
}

Harl::Harl(void)
{
	this->_level = "DEBUG";
	this->message[0].level = "DEBUG";
	this->message[0].f = &Harl::debug;
	this->message[1].level = "INFO";
	this->message[1].f = &Harl::info;
	this->message[2].level = "WARNING";
	this->message[2].f = &Harl::warning;
	this->message[3].level = "ERROR";
	this->message[3].f = &Harl::error;
}

Harl::Harl(std::string level)
{
	this->_level = level;
	this->message[0].level = "DEBUG";
	this->message[0].f = &Harl::debug;
	this->message[1].level = "INFO";
	this->message[1].f = &Harl::info;
	this->message[2].level = "WARNING";
	this->message[2].f = &Harl::warning;
	this->message[3].level = "ERROR";
	this->message[3].f = &Harl::error;
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
