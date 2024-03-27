/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:27:43 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 13:50:59 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"
class Point {

public:

	Point( void );
	Point( const Fixed& x, const Fixed& y);
	Point& operator=( const Point& Other );
	Point( const Point& Other);
	~Point();

	Point	operator-( const Point& Other ) const;
	const Fixed	getx( void ) const;
	const Fixed	gety( void ) const;

private:

	const Fixed	_x;
	const Fixed	_y;
};


#endif