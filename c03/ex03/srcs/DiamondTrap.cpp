/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:47:58 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 15:51:08 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap("NoName_clap_name") {
	std::cout << "\033[0;32m✔️DiamondTrap Default Constructor called.\033[0m" << std::endl;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
	this->_hitpoints = FragTrap::_hitpoints;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name + "_clap_name") {
	std::cout << "\033[0;32m✔️DiamondTrap Named Constructor called.\033[0m" << std::endl;
	this->_name = name;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
	this->_hitpoints = FragTrap::_hitpoints;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "\033[0;91m✗DiamondTrap Destructor called.\033[0m" << std::endl;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap " << this->_name << " has herited from ClapTrap of name: " << ClapTrap::_name << std::endl;
}

