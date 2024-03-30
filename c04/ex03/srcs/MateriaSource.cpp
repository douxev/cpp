/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:42:09 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/30 13:09:10 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for (int i = 0; i < 4; i++)
		this->_storage[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& Other) {
	for (int i = 0; i < 4; i++) {
		if (this->_storage[i])
			delete this->_storage[i];
		if (Other._storage[i])
			this->_storage[i] = Other._storage[i];
		else
			this->_storage[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=( const MateriaSource& Other) {
	if (this == &Other)
		return (*this);
	for (int i = 0; i < 4; i++) {
		if (this->_storage[i])
			delete this->_storage[i];
		if (Other._storage[i])
			this->_storage[i] = Other._storage[i];
		else
			this->_storage[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (this->_storage[i])
			delete this->_storage[i];
}

void MateriaSource::learnMateria( AMateria* m ) {
	int i = 0;
	while (this->_storage[i] && i < 4)
		i++;
	if (i < 4)
		this->_storage[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->_storage[i] && this->_storage[i]->getType() == type)
			return (this->_storage[i]->clone());
	}
	return (NULL);
}
