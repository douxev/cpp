/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:31:13 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/06/25 13:49:37 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/BitcoinExchange.hpp"

int	main( int ac, char **av ) {
	
	if (ac != 2) {
		std::cerr << "Error: wrong number of arguments!" << std::endl;
		return(1);
	}
	(void) av;
	

	std::cout << "___LOADING DATABASE___" << std::endl;
	BitcoinExchange data;

	std::cout << std::endl << "___PROCESSING INPUT FILE___" << std::endl;
	data.load_file(av[1]);
	// data.print_data();
}
