/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:27:25 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 16:03:25 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ) {
	std::cout << "\033[0;32m✔️Dog Default Constructor called.\033[0m" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog() {
	std::cout << "\033[0;91m✗Dog Destructor called.\033[0m" << std::endl;
	delete this->_brain;
	
}

void	Dog::makeSound( void ) const {
	std::cout << "* Wouff *" << std::endl;
}

Dog::Dog( const Dog& Other ) {
	std::cout << "\033[0;32m✔️Dog Copy Constructor called.\033[0m" << std::endl;
	this->type = Other.getType();
	this->_brain = new Brain(*Other._brain);
	
}

Dog& Dog::operator=( const Dog& Other ) {
	std::cout << "Dog Copy Assignment operator called." << std::endl;
	this->type = Other.type;
	delete this->_brain;
	this->_brain = new Brain(*Other._brain);
	return (*this);
}