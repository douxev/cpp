/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:00:13 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/31 14:35:20 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main( void )
{
	{
		Bureaucrat Manu("Manu");
		std::cout << Manu << std::endl;
		try {
			for (int i = 0; i < 150; i++)
			Manu.getRaise();
		}
		catch (std::exception& e) {
			std::cout << "Exception " << e.what() << " raised." << std::endl;
		}
		std::cout << Manu << std::endl;
	}
	
	{
		Bureaucrat Manu("Lilo");
		try {
			Manu.getCut();
		}
		catch (std::exception& e) {
			std::cout << "Exception " << e.what() << " raised." << std::endl;
		}
		std::cout << Manu << std::endl;
	}
	
	return (0);
}
