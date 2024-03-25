/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:43:54 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/25 17:42:22 by jdoukhan         ###   ########.fr       */
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
	Fixed&	operator=( const Fixed& Other );

	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits ( int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

	int					_mantissa;
	static const int	_expo = 8;
};

inline std::ostream	&operator<<( std::ostream& os, const Fixed& fixed) { return (os << fixed.toFloat()); }
inline bool			operator<(const Fixed& left, const Fixed& right) { return (left.getRawBits() < right.getRawBits());}
inline bool			operator>(const Fixed& left, const Fixed& right) { return (left.getRawBits() > right.getRawBits());}
inline bool			operator>=(const Fixed& left, const Fixed& right) {	return (!(left.getRawBits() < right.getRawBits()));}
inline bool			operator<=(const Fixed& left, const Fixed& right) {	return (!(left.getRawBits() > right.getRawBits()));}
inline bool			operator==(const Fixed& left, const Fixed& right) {	return ((left.getRawBits() == right.getRawBits()));}
inline bool			operator!=(const Fixed& left, const Fixed& right) {	return ((left.getRawBits() != right.getRawBits()));}

inline Fixed&		operator+=(Fixed& left, const int right) { return(left.setRawBits(left.getRawBits() + (right << 8)), left); }
inline Fixed&		operator+=(Fixed& left, const float right) { Fixed tmp(left.toFloat() + right); return( left.setRawBits(tmp.getRawBits()), left); }
inline Fixed&		operator+=(Fixed& left, const Fixed& right) { return((left += right.toFloat())); }

inline Fixed&		operator-=(Fixed& left, const int right) { return(left.setRawBits(left.getRawBits() + (right << 8)), left); }
inline Fixed&		operator-=(Fixed& left, const float right) { Fixed tmp(left.toFloat() + right); return( left.setRawBits(tmp.getRawBits()), left); }
inline Fixed&		operator-=(Fixed& left, const Fixed& right) { return((left -= right.toFloat())); }

// inline Fixed&		operator++(Fixed &postfixx) { return(postfixx - 1); }

inline Fixed&	operator+(Fixed& left, const Fixed& right) {return (left += right, left);}
inline Fixed&	operator-(Fixed& left, const Fixed& right) {return (left -= right, left);}

inline Fixed&		operator++(Fixed &postfixx) { return(postfixx + 1); } //no
inline Fixed&		operator--(Fixed &postfixx) { return(postfixx - 1); }

#endif
