/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:47:58 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 17:47:22 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap("NoName_clap_name") {
	std::cout << "DiamondTrap Default Constructor called." << std::endl;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
	this->_hitpoints = FragTrap::_hitpoints;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrap Named Constructor called." << std::endl;
	this->_name = name;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
	this->_hitpoints = FragTrap::_hitpoints;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called." << std::endl;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap " << this->_name << " has herited from ClapTrap of name: " << ClapTrap::_name << std::endl;
}

