/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:27:25 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 18:41:40 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog Default Constructor called." << std::endl;
	this->type = "Dog";
	this->sound = "Wouf";
}

Dog::~Dog() {
	std::cout << "Dog Destructor called." << std::endl;

}
