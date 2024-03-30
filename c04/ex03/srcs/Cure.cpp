/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:00:02 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/30 12:13:34 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) {
	this->type = "cure";
}

Cure::Cure( const Cure& Other) {
	this->type = Other.type;
}

Cure::~Cure( void ) {}

Cure& Cure::operator=( const Cure& Other) {
	this->type = Other.type;
	return (*this);
}

AMateria* Cure::clone( void ) const {
	return (new Cure(*this));
}

void Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
