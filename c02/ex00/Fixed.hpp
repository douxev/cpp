/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:43:54 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/24 17:39:03 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <algorithm>
# include <iostream>

class Fixed
{
public:

	Fixed( void );
	Fixed& operator=( const Fixed& Other );
	Fixed( const Fixed& copied);
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits ( int const raw);

private:

	int					_fixed_point;
	static const int	_frac_bits = 8;
};


#endif
