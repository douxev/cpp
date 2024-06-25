/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:31:13 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/06/25 11:31:59 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "../includes/BitcoinExchange.hpp"

int	main( int ac, char **av ) {
	
	if (ac != 2) {
		std::cerr << "Error: wrong number of arguments!" << std::endl;
		std::exit(1);
	}
	
	std::ifstream file(av[1]);

	if (!file.is_open() || !file.good()) {
		std::cerr << "Error: cannot open or read file '" << av[1] << "'." << std::endl;
		std::exit(1);
	}
	
	BitcoinExchange data;
}
