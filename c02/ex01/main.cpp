/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:43:35 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/25 14:35:43 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int     main( void ) {
	// Fixed       a;
	Fixed const b( 1234.4321f );
	Fixed const c( 42.42f );
	// Fixed const d( b );
	// a = Fixed( 1234.4321f );
	// std::cout << "a is " << a << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;
	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toFloat() << " as Float" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "b is " << c.toFloat() << " as Float" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}