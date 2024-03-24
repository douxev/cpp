/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:04:00 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/24 16:48:47 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_class) : _weapon(weapon_class), _name(name){}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their ";
	std::cout << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::setWeapon(Weapon &weapon_class)
{
	this->_weapon = weapon_class;
}

