/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:31:13 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/09 16:55:24 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main( void )
{
	std::vector<int> container;
	container.push_back(19);
	container.push_back(10);
	container.push_back(11);
	container.push_back(12);
	container.push_back(13);
	container.push_back(14);
	container.push_back(15);

	try {
		std::cout << container.at(0) << std::endl;
		std::cout << *(easyfind(container, 12)).base() << std::endl;
	}
	catch (...) {std::cout << "exception thrown" << std::endl;}
	
	return 0;
}
