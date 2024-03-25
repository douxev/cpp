/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:43:54 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/25 11:34:15 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>

class Fixed
{
public:

	Fixed( void );
	Fixed( const Fixed& Other);
	Fixed( const int inb );
	Fixed( const float fnb );
	Fixed& operator=( const Fixed& Other );
	~Fixed();
	
	int		getRawBits( void ) const;
	void	setRawBits ( int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

	int					_mantissa;
	static const int	_expo = 8;
};


#endif
