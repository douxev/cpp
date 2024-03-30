/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:41:52 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/30 13:39:07 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ){
	this->name = "Unknown";
	for (int i = 0; i < 4; i++)
		this->item[i] = NULL;
}

Character::Character( const std::string name) {
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->item[i] = NULL;
}

Character::Character( const Character& Other) {
	this->name = Other.name;
	for (int i = 0; i < 4; i++) {
		if (this->item[i])
			delete this->item[i];
		if (Other.item[i])
			this->item[i] = Other.item[i];
		else
			this->item[i] = NULL;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete this->item[i];
}

Character& Character::operator=( const Character& Other) {
	if (this == &Other)
		return (*this);
	this->name = Other.name;
	for (int i = 0; i < 4; i++) {
		if (this->item[i])
			delete this->item[i];
		if (Other.item[i])
			this->item[i] = Other.item[i];
		else
			this->item[i] = NULL;
	}
	return (*this);
}

void Character::equip(AMateria* m) {
	int i = 0;
	while (this->item[i] && i < 4)
		i++;
	if (i < 4)
		this->item[i] = m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		this->item[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->item[idx])
		this->item[idx]->use(target);
}

std::string const & Character::getName() const {
	return (this->name);
}

AMateria* Character::get_Materia( unsigned int idx ) const {
	if (idx >= 0 && idx < 4 && this->item[idx])
		return (this->item[idx]);
	return (NULL);
}