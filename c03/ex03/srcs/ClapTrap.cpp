/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:17:25 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 16:26:48 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _name("NoName"), _hitpoints(10), _energy(10), _attack(0) {
	std::cout << "ClapTrap Default Constructor called." << std::endl;
	
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hitpoints(10), _energy(10), _attack(0) {
	std::cout << "ClapTrap Named Constructor called." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& Other ): _name(Other._name), _hitpoints(Other._hitpoints), _energy(Other._energy), _attack(Other._attack) {
	std::cout << "ClapTrap Copy Constructor called." << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& Other ) {
	this->_name = Other._name;
	this->_hitpoints = Other._hitpoints;
	this->_energy = Other._energy;
	this->_attack = Other._attack;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called." << std::endl;
}


void	ClapTrap::attack( const std::string& target ) {
	std::cout	<< "ClapTrap " << this->_name 
				<< " attacks " << target
				<< ", causing " << this->_attack 
				<< " points of damage." << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	this->_hitpoints -= amount;
	if (this->_hitpoints < 0)
		this->_hitpoints = 0;
	std::cout	<< "ClapTrap " << this->_name 
				<< " takes " << amount 
				<< " damage(s), ";
	if (this->_hitpoints == 0)
		std::cout << "it is now destroyed." << std::endl;
	else
		std::cout << this->_hitpoints << " hitpoints left." << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_energy == 0)
	{
		std::cout	<< "ClapTrap" << this->_name
					<< " has not enough energy to repair." << std::endl;
		return ;
	}
	this->_energy--;
	this->_hitpoints += amount;
	std::cout	<< "ClapTrap " << this->_name 
				<< " repairs itself of " << amount 
				<< " points, hitpoints now at " << this->_hitpoints 
				<< ", " << this->_energy << " energy points left." << std::endl;
}

const std::string	ClapTrap::getName( void ) const {
	return (this->_name);
}
