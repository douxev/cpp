/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:43:35 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 14:11:31 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int	main( void ) {

	Point const	a(1, 1);
	Point const	b(0, 4);
	Point const	c(3, 5);
	Point const	point(1, 10);

	if (bsp(a, b, c, point))
		std::cout << "\033[0;32m✔️ Inside the triangle ✔️\033[0m" << std::endl;
	else
		std::cout << "\033[0;91m✗ NOT inside the triangle ✗\033[0m" << std::endl;
	
	return (0);
}