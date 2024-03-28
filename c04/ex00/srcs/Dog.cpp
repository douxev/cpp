/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:27:25 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 11:56:51 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog Default Constructor called." << std::endl;
	this->type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog Destructor called." << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "* Wouff *" << std::endl;
}
