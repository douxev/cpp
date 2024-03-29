/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:41:52 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/29 20:52:38 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {
	this->name = "Unknown";
}

Character::Character( std::string name) {
	this->name = name;
}

std::string const & Character::getName() const {
	return (this->name);
}

void Character::equip(AMateria* m) {
	int i = 0;
	while (this->item[i] && i < 4)
		i++;
	if (i < 4)
		this->item[i] = m;
}

//think of a way to keep the adress to free it at the end.
void Character::unequip(int idx) {
	this->item[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	this->item[idx]->use(target);
}

