/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:25:11 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 16:05:36 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"

Brain::Brain( void ) {
	std::cout << "\033[0;32m✔️Brain Default Constructor called.\033[0m" << std::endl;
}

Brain::Brain( const Brain& Other ) {
	std::cout << "\033[0;32m✔️Brain Copy Constructor called.\033[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = Other.ideas[i];
}

Brain& Brain::operator=( const Brain& Other ) {
	std::cout << "Brain Copy Assignment operator called." << std::endl;

	for (int i = 0; i < 100; i++)
		this->ideas[i] = Other.ideas[i];
	return (*this);
}

Brain::~Brain() {
	std::cout << "\033[0;91m✗Brain Destructor called.\033[0m" << std::endl;
}
