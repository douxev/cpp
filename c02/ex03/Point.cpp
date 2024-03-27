/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:27:22 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 13:54:05 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include "Point.hpp"

Point::Point( void ) {}
Point::Point( const Fixed& x, const Fixed& y): _x(x), _y(y) {}
Point::Point( const Point& Other ): _x(Other._x), _y(Other._y) {}

Point& Point::operator=( const Point& Other ) {
	(void) Other;
	return (*this);
}

Point::~Point() {
	
}

const Fixed	Point::getx( void ) const
{
	return (this->_x);
}

const Fixed	Point::gety( void ) const
{
	return (this->_y);
}

Point	Point::operator-( const Point& Other ) const
{
	Point	tmp(this->_x - Other._x, this->_y - Other._y);
	return (tmp);
}
