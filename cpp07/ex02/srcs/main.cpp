/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:31:13 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/08 15:38:29 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>
#include <cstdlib>
#include <sstream>

int	main( void )
{
	{
		int n = 10;
		Array<int> tab(n);
		std::cout << "Tab size: " << tab.size() << std::endl;
		for (int i = 0; i < n; i++) {
			tab[i] = rand();
		}
		std::cout << tab;
	}
	{
		int n = 7;
		Array<std::string> tab(n);
		for (int i = 0; i < n; i++) {
			std::stringstream stringo;
			stringo << i + 1;
			tab[i] = "Line_" + stringo.str();
		}
		std::cout << tab;
		try {
			(void) tab[10];
		}
		catch (...) {
			std::cout << "Index overflow." << std::endl;
		}

		int * a = new int();
		std::cout << *a << std::endl;
		delete a;
	}
	return 0;
}
