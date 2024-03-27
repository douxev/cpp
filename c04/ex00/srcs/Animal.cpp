/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:22:21 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 18:44:22 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): type("None"), sound("***") {
	std::cout << "Animal Default Constructor called." << std::endl;
}

Animal::Animal( const Animal& Other ): type(Other.type), sound(Other.sound) {
	std::cout << "Animal Param Constructor called." << std::endl;
}

Animal& Animal::operator=( const Animal& Other ) {
	this->type = Other.type;
	this->sound = Other.sound;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal Destructor called." << std::endl;
}

void	Animal::makeSound( void )
{
	std::cout << this->sound << std::endl;
}

std::string	Animal::getType( void ) {
	return (this->type);
}
