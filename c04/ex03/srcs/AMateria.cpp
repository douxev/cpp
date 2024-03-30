/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:59:56 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/30 13:07:49 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ): type("amateria") {}
AMateria::AMateria( const AMateria& Other): type(Other.type) {}
AMateria::AMateria(std::string const & type): type(type) {}

std::string const & AMateria::getType() const {
	return (this->type);
} //Returns the materia type

AMateria& AMateria::operator=( const AMateria& Other) {
	this->type = Other.type;
	return(*this);
}

void AMateria::use(ICharacter& target) {
	std::cout << "*uses " << this->type << "on " << target.getName() << " *" << std::endl;
}

AMateria::~AMateria() {
	return ;
}
