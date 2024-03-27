/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:27:23 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 18:41:26 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat Default Constructor called." << std::endl;
	this->type = "Cat";
	this->sound = "Miaou";
}

Cat::~Cat() {
	std::cout << "Cat Destructor called." << std::endl;
}
