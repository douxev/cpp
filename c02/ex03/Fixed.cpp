/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 13:05:56 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 14:01:18 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	ft_reverse_bits(int c)
{
	return (((0b10000000 & c) >> 7) | \
			((0b01000000 & c) >> 5) | \
			((0b00100000 & c) >> 3) | \
			((0b00010000 & c) >> 1) | \
			((0b00000001 & c) << 7) | \
			((0b00000010 & c) << 5) | \
			((0b00000100 & c) << 3) | \
			((0b00001000 & c) << 1));
}


Fixed::Fixed( void ): _mantissa(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& Other ): _mantissa(Other._mantissa)
{
	// std::cout << "Copy constructor called" << std::endl;
}


Fixed	Fixed::operator=( const Fixed& Other )
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(Other.getRawBits());
	return (*this);
}

Fixed::Fixed( const int inb ): _mantissa(inb << this->_expo)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float fnb )
{
	// std::cout << "Float constructor called" << std::endl;
	
	this->_mantissa = roundf(fnb * (1 << this->_expo));
}


float	Fixed::toFloat( void ) const
{
	return ((float) (this->getRawBits()) / (1 << this->_expo));
}

int		Fixed::toInt( void ) const
{
	return (roundf((this->toFloat())));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
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
	return (os << fixed.toFloat()); 
}

bool	Fixed::operator<(const Fixed& Other) const
{
	return (this->getRawBits() < Other.getRawBits());
}

bool	Fixed::operator>(const Fixed& Other) const
{
	return (this->getRawBits() > Other.getRawBits());
}

bool	Fixed::operator>=(const Fixed& Other) const
{
	return (!(this->getRawBits() < Other.getRawBits()));
}

bool	Fixed::operator<=(const Fixed& Other) const
{
	return (!(this->getRawBits() > Other.getRawBits()));
}

bool	Fixed::operator==( const Fixed& Other ) const
{
	return ((this->getRawBits() == Other.getRawBits()));
}

bool	Fixed::operator!=( const Fixed& Other ) const
{
	return ((this->getRawBits() != Other.getRawBits()));
}

Fixed	Fixed::operator+( const Fixed& Other ) const
{
	Fixed	tmp(*this);
	tmp._mantissa += Other._mantissa;
	return (tmp);
}

Fixed	Fixed::operator-( const Fixed& Other ) const
{
	Fixed	tmp(*this);
	tmp._mantissa -= Other._mantissa;
	return (tmp);
}

Fixed	Fixed::operator*( const Fixed& Other ) const
{
	Fixed	tmp;
	tmp._mantissa = (this->toFloat() * Other.toFloat()) * (1 << this->_expo);
	return (tmp);
}

Fixed	Fixed::operator/( const Fixed& Other ) const
{
	Fixed	tmp;
	tmp._mantissa = (this->toFloat() / Other.toFloat()) * (1 << this->_expo);
	return (tmp);
}

Fixed	Fixed::operator++( int )
{
	Fixed	tmp(*this);
	++(*this);
	return(tmp);
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp(*this);
	--(*this);
	return(tmp);
}


Fixed	Fixed::operator++( void )
{
	this->_mantissa++;
	return(*this);
}

Fixed	Fixed::operator--( void )
{
	this->_mantissa--;
	return(*this);
}

const Fixed&		Fixed::min( const Fixed& a, const Fixed& b )
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

const Fixed&		Fixed::max( const Fixed& a, const Fixed& b )
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}
