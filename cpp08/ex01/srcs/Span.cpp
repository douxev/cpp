/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:51:49 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/10 13:20:13 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>


Span::Span( void ): _N(0) {
	this->_tab.reserve(_N);
}
Span::Span( const unsigned int N ): _N(N) {
	this->_tab.reserve(_N);
}
Span::Span( const Span& Other ): _N(Other._N) {
	this->_tab.reserve(_N);
}

Span& Span::operator=( const Span& Other ) {
	this->_N = Other._N;
	this->_tab = Other._tab;
	return (*this);
}

Span::~Span() {

}

void Span::addNumber( const int nb ) {
	if (this->_tab.capacity() == 0)
		throw Span::MaxCapacityReachedException();
	else {
		this->_tab.push_back(nb);
	}
}

unsigned int Span::shortestSpan( void ) const {
	if (this->_tab.size() < 2)
		throw Span::TooFewNumbersException();

	std::vector<int>sorted(this->_tab);
	std::sort(sorted.begin(), sorted.end());

	int substract = *(sorted.begin() + 1) - *(sorted.begin());
	for (iter it = sorted.begin(); it != sorted.end() - 1; it++) {
		if (*(it + 1) - *it < substract) {
			substract = *(it + 1) - *it;
		}
	}
	return (substract);
}

unsigned int Span::longestSpan( void ) const {
	if (this->_tab.size() < 2)
		throw Span::TooFewNumbersException();
	
	std::vector<int>sorted(this->_tab);
	std::sort(sorted.begin(), sorted.end());
	// std::cout << *sorted.begin() << " | " << sorted.back() << std::endl;
	return (static_cast<unsigned int>(static_cast<int>((sorted.back() - *sorted.begin()))));
}



void Span::addRange( iter start, iter end ) {
	// std::cout << "cap: " << this->_tab.capacity() - this->_tab.size() << " distance: " << std::distance(start, end) << std::endl;
	if (static_cast<unsigned int>(std::distance(start, end)) > static_cast<unsigned int>(this->_tab.capacity() - this->_tab.size()))
		throw Span::MaxCapacityReachedException();
	else {
		this->_tab.insert(this->_tab.end(), start, end);
	}
}

unsigned int Span::size( void ) const {
	return (static_cast<unsigned int>(this->_tab.size()));
}
