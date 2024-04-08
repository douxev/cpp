/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:37:20 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/08 11:11:25 by jdoukhan         ###   ########.fr       */
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

	std::string pliterals[] = { "inf", "inff", "-inf", "-inf" };
	for (int i = 0; i < 4; i++) {
		if (str == pliterals[i]) {
			std::cout	<< "char: impossible value" << std::endl;
			std::cout	<< "int: impossible value" << std::endl;
			std::cout	<< "float: " << std::atof(str.c_str()) << std::endl;
			std::cout	<< "double: " << static_cast<double>(std::strtod(str.c_str(), NULL)) << std::endl;
			return ;
		}
	}
	if ((str.size() == (size_t)1 && !isdigit(str[0])) || (isdigit(str[0]) && std::atoll(str.c_str()) < 128 && std::atoll(str.c_str()) >= -128)) {
		if (!isdigit(str[0]))
			c = static_cast<char>(str[0]);
		else
			c = static_cast<char>(std::atoi(str.c_str()));
		if (std::isprint(c))
			std::cout	<< "char: '" << c << "'" << std::endl;
		else
			std::cout	<< "char: Non printable char" << std::endl;
		std::cout	<< "int: " << static_cast<int>(c) << std::endl;
		if (!isdigit(str[0])) {
			std::cout	<< "float: " << static_cast<float>(c) << std::endl;
			std::cout	<< "double: " << static_cast<double>(c) << std::endl;
		}
		else {
			std::cout	<< "float: " << std::atof(str.c_str()) << std::endl;
			std::cout	<< "double: " << std::strtod(str.c_str(), NULL) << std::endl;
		}
	}
	else if (str.end()[-1] == 'f' && (str.size() == (size_t)1 || (str.size() >= (size_t)2 && str.rfind('f', str.size() - 1)))) {
		for (size_t i = 0; i < str.size() - 1; i++) {
			if (!isdigit(str[i]) && ((str[i] == '.' && point) || str[i] != '.')) {
				std::cout << "Impossible value." << std::endl;
				return ;
			}
			else if ((size_t) i == str.size() - 2) {
				fnb = std::atof(str.c_str());
				if (static_cast<int>(fnb) < 128 && static_cast<int>(fnb) >= -127)
					std::cout	<< "char: '" << static_cast<char>(fnb) << "'" << std::endl;
				else
					std::cout	<< "char: impossible value" << std::endl;
				std::cout	<< "int: " << static_cast<int>(fnb) << std::endl;
				std::cout	<< "float: " << fnb << std::endl;
				std::cout	<< "double: " << static_cast<double>(fnb) << std::endl;
				std::cout << "HERE" << std::endl;
			}
			if (str[i] == '.')
				point = true;
		}
		return ;
	}
	else {
		for (size_t i = 0; i < str.size(); i++) {
			if (!isdigit(str[i]) || std::atoll(str.c_str()) > __INT_MAX__ || - std::atoll(str.c_str()) - 1> __INT_MAX__)
				std::cout << "int: impossible value" << std::endl;
			else if ((size_t) i == str.size() - 1) {
				nb = std::atoi(str.c_str());
				if (nb < 128 && nb >= -128)
					std::cout	<< "char: '" << static_cast<char>(nb) << "'" << std::endl;
				else
					std::cout	<< "char: impossible value" << std::endl;
				std::cout	<< "int: " << nb << std::endl;
				std::cout	<< "float: " << static_cast<int>(nb) << std::endl;
				std::cout	<< "double: " << static_cast<double>(nb) << std::endl;

			}
			
		}
		return ;
	}
	(void) dnb;
}
