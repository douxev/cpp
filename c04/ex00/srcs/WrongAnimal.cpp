/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:22:21 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 11:56:21 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): type("Wrong") {
	std::cout << "WrongAnimal Default Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& Other ): type(Other.type) {
	std::cout << "WrongAnimal Param Constructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& Other ) {
	this->type = Other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called." << std::endl;
}

void	WrongAnimal::makeSound( void ) const{
	std::cout << "* weird zzz *" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return (this->type);
}
