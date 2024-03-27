/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:24:34 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 17:53:21 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	std::cout << "ScavTrap Default Constructor called." << std::endl;
	this->_hitpoints = 100;
	_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap( std::string name ) {
	std::cout << "ScavTrap Named Constructor called." << std::endl;
	this->_name = name;
	this->_hitpoints = 100;
	_energy = 50;
	this->_attack = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called." << std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap is now in Keeper mode." << std::endl;
}

void	ScavTrap::attack( const std::string& target ) {
	std::cout	<< "ScavTrap " << this->_name 
				<< " attacks " << target
				<< ", causing " << _attack 
				<< " points of damage." << std::endl;
}
