/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 13:05:56 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/25 15:51:52 by jdoukhan         ###   ########.fr       */
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


Fixed&	Fixed::operator=( const Fixed& Other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(Other.getRawBits());
	return (*this);
}

Fixed::Fixed( const int inb ): _mantissa(inb << this->_expo)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float fnb )
{
	std::cout << "Float constructor called" << std::endl;
	
	int dec = (int) (std::fmod(fnb, 1) * 256);
	this->_mantissa = (int) ((int)( fnb )) << this->_expo | ((int) \
	((0b10000000 & dec) >> 7) | \
	((0b01000000 & dec) >> 5) | \
	((0b00100000 & dec) >> 3) | \
	((0b00010000 & dec) >> 1) | \
	((0b00000001 & dec) << 7) | \
	((0b00000010 & dec) << 5) | \
	((0b00000100 & dec) << 3) | \
	((0b00001000 & dec) << 1)\
	);
}


float	Fixed::toFloat( void ) const
{
	float	nb;
	nb = (float) (this->_mantissa >> this->_expo) + ((float)(\
	((0b10000000 & this->_mantissa) >> 7) | \
	((0b01000000 & this->_mantissa) >> 5) | \
	((0b00100000 & this->_mantissa) >> 3) | \
	((0b00010000 & this->_mantissa) >> 1) | \
	((0b00001000 & this->_mantissa) << 1) | \
	((0b00000100 & this->_mantissa) << 3) | \
	((0b00000010 & this->_mantissa) << 5) | \
	((0b00000001 & this->_mantissa) << 7)) / 256);
	return (nb);
}

int		Fixed::toInt( void ) const
{
	return (roundf((this->toFloat())));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_mantissa);
}

void	Fixed::setRawBits ( int const raw)
{
	this->_mantissa = raw;
}

std::ostream	&operator<<( std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}