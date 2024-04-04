/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:37:20 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/04 17:57:26 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>

void ScalarConverter::convert( const std::string str ) {

	char	c;
	int		nb;
	float	fnb;
	double	dnb;

	bool point = 0;

	if (str.size() == (size_t)1 && !isdigit(str[0])) {
		c = static_cast<char>(str[0]);
		std::cout	<< "char: '" << c << "'" << std::endl;
		std::cout	<< "int: " << static_cast<int>(c) << std::endl;
		std::cout	<< "float: " << static_cast<float>(c) << std::endl;
		std::cout	<< "double: " << static_cast<double>(c) << std::endl;
	}
	else if (str.end()[-1] == 'f') {
		for (size_t i = 0; i < str.size() - 1; i++) {
			if (!isdigit(str[i]) && str[i] == '.' && point)
				std::cout << "float: impossible" << std::endl;
			else if ((size_t) i == str.size() - 2) {
				fnb = std::atof(str.c_str());
				std::cout	<< "char: '" << static_cast<char>(fnb) << "'" << std::endl;
				std::cout	<< "int: " << static_cast<int>(fnb) << std::endl;
				std::cout	<< "float: " << fnb << std::endl;
				std::cout	<< "double: " << static_cast<double>(fnb) << std::endl;
			}
			if (str[i] == '.')
				point = true;
		}
	}
	else {
		for (size_t i = 0; i < str.size(); i++) {
			if (!isdigit(str[i]))
				std::cout << "int: impossible" << std::endl;
			else if ((size_t) i == str.size() - 1) {
				nb = std::atoi(str.c_str());
				std::cout	<< "char: '" << static_cast<char>(nb) << "'" << std::endl;
				std::cout	<< "int: " << nb << std::endl;
				std::cout	<< "float: " << static_cast<int>(nb) << std::endl;
				std::cout	<< "double: " << static_cast<double>(nb) << std::endl;
			}
			
	}
	}
	(void) nb;
	(void) dnb;
}
