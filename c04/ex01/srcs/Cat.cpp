/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:27:23 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 16:03:21 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) {
	std::cout << "\033[0;32m✔️Cat Default Constructor called.\033[0m" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat() {
	std::cout << "\033[0;91m✗Cat Destructor called.\033[0m" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound( void ) const{
	std::cout << "* Miaou *" << std::endl;
}

Cat& Cat::operator=( const Cat& Other ) {
	std::cout << "Cat Copy Assignment operator called." << std::endl;
	this->type = Other.type;
	delete this->_brain;
	this->_brain = new Brain(*Other._brain);
	return (*this);
}

Cat::Cat( const Cat& Other ) {
	std::cout << "\033[0;32m✔️Cat Copy Constructor called.\033[0m" << std::endl;
	this->type = Other.getType();
	this->_brain = new Brain(*Other._brain);
	
}
