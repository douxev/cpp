/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:03:53 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/24 11:24:17 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain( std::string level )
{
	int	i;

	i = 0;
	while (this->_message[i].level != level && i < 4)
		i++;
	if (i < 4)
		(this->*_message[i].f)();
}

Harl::Harl(void)
{
	this->_message[0].level = "DEBUG";
	this->_message[0].f = &Harl::debug;
	this->_message[1].level = "INFO";
	this->_message[1].f = &Harl::info;
	this->_message[2].level = "WARNING";
	this->_message[2].f = &Harl::warning;
	this->_message[3].level = "ERROR";
	this->_message[3].f = &Harl::error;
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
