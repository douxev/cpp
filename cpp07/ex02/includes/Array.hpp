/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:23:18 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/08 15:45:13 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <cstdlib>

template <typename T>

class Array {

public:

	Array( void );
	Array( unsigned int n );
	Array( const Array<T>& Other);
	Array<T>& operator=( const Array<T>& Other );
	T& operator[]( const size_t i );
	const T& operator[]( const size_t i ) const;
	~Array();
	size_t size( void ) const;
	

private:

	T* _arr;
	size_t _n;
};

template <typename T>
std::ostream& operator<<( std::ostream& os, const Array<T>& tab) {
	for (size_t i = 0; i < tab.size(); i++) {
		os << tab[i] << std::endl;
	}

	return (os);
}

# include "Array.tpp"


#endif
