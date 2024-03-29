/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:59:56 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/29 20:54:21 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): type(type) {
	
}

std::string const & AMateria::getType() const {
	return (type);
} //Returns the materia type

// AMateria* AMateria::clone() const = 0;

void AMateria::use(ICharacter& target) {
	std::cout << "*uses " << this->type << "on " << target.getName() << std::endl;
}

AMateria::~AMateria() {
	
}