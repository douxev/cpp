/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:22:21 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 16:19:56 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): type("None") {
	std::cout << "\033[0;32m✔️Animal Default Constructor called.\033[0m" << std::endl;
}

Animal::Animal( const Animal& Other ): type(Other.type) {
	std::cout << "\033[0;32m✔️Animal Copy Constructor called.\033[0m" << std::endl;
}

Animal& Animal::operator=( const Animal& Other ) {
	this->type = Other.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "\033[0;91m✗Animal Destructor called.\033[0m" << std::endl;
}

void	Animal::makeSound( void ) const{
	std::cout << "* zzz *" << std::endl;
}

std::string	Animal::getType( void ) const {
	return (this->type);
}
