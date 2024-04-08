/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:23:18 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/08 13:42:52 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& firstArg, T& secondArg) {
	T tmp = firstArg;
	firstArg = secondArg;
	secondArg = tmp;
}

template <typename T>
T min( T a, T b ) {
	if (a < b)
		return a;
	return b;
}

template <typename T>
T max( T a, T b ) {
	if (a > b)
		return a;
	return b;
}

#endif
