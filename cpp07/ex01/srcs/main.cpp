/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:31:13 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/08 14:07:39 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

void ft_print(const std::string& str) {
	std::cout << str << std::endl;
}

int	main( void )
{
	{
		std::string tab[] = {"first", "second", "third"};
		iter(tab, 3, ft_print);
	}
	
	{
		int tab[] = {1, 2, 3, 4, 5};
		iter(tab, 5, ft_double);
	}
	return 0;
}
