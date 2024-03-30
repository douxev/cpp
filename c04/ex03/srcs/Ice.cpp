/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:00:07 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/30 12:16:20 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) {
	this->type = "ice";
}

Ice::Ice( const Ice& Other) {
	this->type = Other.type;
}

Ice& Ice::operator=( const Ice& Other) {
	this->type = Other.type;
	return (*this);
}

Ice::~Ice() {}

AMateria* Ice::clone( void ) const {
	return (new Ice(*this));
}

void Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}