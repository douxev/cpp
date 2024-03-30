/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:00:13 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/30 23:53:53 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main( void )
{
	Bureaucrat Manu;
	try {
		Manu.getCut();
	}
	catch (Bureaucrat::GradeException& e)
	{
		std::cout << "Exception " << e.what() << " raised." << std::endl;
	}
	return (0);
}
