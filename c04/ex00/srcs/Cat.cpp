/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:27:23 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 11:56:57 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat Default Constructor called." << std::endl;
	this->type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat Destructor called." << std::endl;
}

void	Cat::makeSound( void ) const{
	std::cout << "* Miaou *" << std::endl;
}
