/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:23:03 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/08 12:27:14 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void ): _nb(0) {}
Data::Data( int nb ): _nb(nb) {}
Data::Data( const Data& Other ): _nb(Other._nb) {}
Data::~Data() {}

Data& Data::operator=( const Data& Other ) {
	this->_nb = Other._nb;
	return (*this);
}

Data& Data::operator=( const int nb ) {
	this->_nb = nb;
	return (*this);
}

int Data::getNb( void ) {
	return (this->_nb);
}

void Data::setNb( int nb ) {
	this->_nb = nb;
}