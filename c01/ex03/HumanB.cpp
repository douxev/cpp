/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:03:47 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/22 15:07:57 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " \
	<< this->_weapon->getType() << std::endl;
}

HumanB::HumanB(void)
{
	this->_name = "stranger";
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon &weapon_class)
{
	this->_weapon = &weapon_class;
}
