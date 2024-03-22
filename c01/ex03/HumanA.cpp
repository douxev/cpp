/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:04:00 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/22 15:07:21 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_class)
{
	this->_name = name;
	this->_weapon = &weapon_class;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their ";
	std::cout << this->_weapon->getType() << std::endl;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::setWeapon(Weapon &weapon_class)
{
	this->_weapon = &weapon_class;
}

