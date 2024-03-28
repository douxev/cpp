/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:31:48 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 15:51:16 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	std::cout << "\033[0;32m✔️FragTrap Default Constructor called.\033[0m" << std::endl;
	this->_hitpoints = 100;
	if (this->_energy != 50)
		this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap( std::string name ) {
	std::cout << "\033[0;32m✔️FragTrap Named Constructor called.\033[0m" << std::endl;
	this->_name = name;
	this->_hitpoints = 100;
	if (this->_energy != 50)
		this->_energy = 100;
	this->_attack = 30;
}

FragTrap::~FragTrap() {
	std::cout << "\033[0;91m✗FragTrap Destructor called.\033[0m" << std::endl;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap says it's cool. *HIGH FIVE*" << std::endl;
}

void	FragTrap::attack( const std::string& target ) {
	std::cout	<< "FragTrap " << this->_name 
				<< " attacks " << target
				<< ", causing " << _attack 
				<< " points of damage." << std::endl;
}
