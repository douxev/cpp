/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:42:35 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 14:00:26 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed	weight;
	Point	B(b - a);
	Point	C(c - a);
	Point	P(point - a);
	Fixed	d;

	d = (B.getx() * C.gety()) - (C.getx() * B.gety());

	weight = ((P.getx() * (B.gety() - C.gety())) + \
	(P.gety() * (C.getx() - B.gety())) + \
	(B.getx() * C.gety()) - \
	(C.getx() * B.gety())) / d;
	
	if (weight < 0 || weight > 1)
		return (false);
	
	weight = ((P.getx() * C.gety()) - (P.gety() * C.getx())) / d;

	if (weight < 0 || weight > 1)
		return (false);
		
	weight = ((P.gety() * B.getx()) - (P.getx() * B.gety())) / d;

	if (weight < 0 || weight > 1)
		return (false);
	
	return (true);
}

