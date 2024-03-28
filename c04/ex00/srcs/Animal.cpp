/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:22:21 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 11:41:08 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): type("None") {
	std::cout << "Animal Default Constructor called." << std::endl;
}

Animal::Animal( const Animal& Other ): type(Other.type) {
	std::cout << "Animal Param Constructor called." << std::endl;
}

Animal& Animal::operator=( const Animal& Other ) {
	this->type = Other.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal Destructor called." << std::endl;
}

void	Animal::makeSound( void ) const{
	std::cout << "* zzz *" << std::endl;
}

std::string	Animal::getType( void ) const {
	return (this->type);
}
