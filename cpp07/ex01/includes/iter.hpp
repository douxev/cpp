/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:23:18 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/08 14:07:09 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* arr, size_t n, void(*f)(const T&)) {
	for (size_t i = 0; i < n; i++) {
		f(arr[i]);
	}
}

template <typename T>
void ft_double(const T& n) {
	std::cout << n * 2 << std::endl;
}

#endif
