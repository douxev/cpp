/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:01:48 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/08 15:28:37 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array( void ): _arr(new T[0]), _n(0) {}

template <typename T>
Array<T>::Array( unsigned int n ): _arr(new T[n]), _n(n) {}

template <typename T>
Array<T>::Array( const Array<T>& Other): _arr(new T[Other._n]), _n(Other._n) {
	for (size_t i = 0; i < this->_n; i++) {
		this->_arr[i] = Other._arr[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=( const Array<T>& Other ) {
	delete[] this->_arr;
	this->_arr = new T[Other._n];
	for (size_t i = 0; i < Other._n; i++) {
		this->_arr[i] = Other._arr[i];
	}
}

template <typename T>
T& Array<T>::operator[]( const size_t i ) {
	if (i + 1 > this->_n)
		throw std::exception();
	return (this->_arr[i]);
}

template <typename T>
const T& Array<T>::operator[]( const size_t i ) const {
	if (i + 1 > this->_n)
		throw std::exception();
	return (this->_arr[i]);
}

template <typename T>
Array<T>::~Array() {
	delete[] this->_arr;
}

template <typename T>
size_t Array<T>::size( void ) const {
	return (this->_n);
}


