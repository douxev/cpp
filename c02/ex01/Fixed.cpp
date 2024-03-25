/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 13:05:56 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/25 11:38:05 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ): _mantissa(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& Other ): _mantissa(Other._mantissa)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& Other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(Other.getRawBits());
	return (*this);
}

Fixed::Fixed( const int inb ): _mantissa(inb << this->_expo)
{
	
}

Fixed::Fixed( const float fnb )
{
	
}

float	Fixed::toFloat( void ) const
{
	
}

int		Fixed::toInt( void ) const
{
	
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_mantissa);
}

void	Fixed::setRawBits ( int const raw)
{
	this->_mantissa = raw;
}
