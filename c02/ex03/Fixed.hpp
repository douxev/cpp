/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:43:54 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 13:33:09 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>
# include <ostream>
# include <sstream>

class Fixed
{
public:

	Fixed( void );
	Fixed( const Fixed& Other);
	Fixed( const int inb );
	Fixed( const float fnb );
	
	Fixed	operator=( const Fixed& Other );
	Fixed	operator+( const Fixed& Other ) const;
	Fixed	operator-( const Fixed& Other ) const;
	Fixed	operator*( const Fixed& Other ) const;
	Fixed	operator/( const Fixed& Other ) const;
	Fixed	operator++( int );
	Fixed	operator--( int );
	Fixed	operator++( void );
	Fixed	operator--( void );
	bool	operator<( const Fixed& Other ) const ;
	bool	operator>( const Fixed& Other ) const ;
	bool	operator>=( const Fixed& Other ) const ;
	bool	operator<=( const Fixed& Other ) const ;
	bool	operator==( const Fixed& Other ) const ;
	bool	operator!=( const Fixed& Other ) const ;
	static const Fixed&	max( const Fixed& a, const Fixed& b );
	static const Fixed&	min( const Fixed& a, const Fixed& b );

	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits ( int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

	int					_mantissa;
	static const int	_expo = 8;
};

std::ostream	&operator<<( std::ostream& os, const Fixed& fixed);


int	ft_reverse_bits(int c);

#endif
