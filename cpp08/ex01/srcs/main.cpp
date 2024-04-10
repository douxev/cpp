/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:31:13 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/10 13:29:29 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main( void )
{
	int n = 20000;
	Span spanVar(n + 1);
	
	try {
		// std::cout << spanVar.shortestSpan() << std::endl;
	}
	catch (Span::TooFewNumbersException e) {std::cout << e.what() << std::endl;}

	spanVar.addNumber(-10);
	// spanVar.addNumber(-12);
	
	std::vector<int> container;
	for (int i = 0; i < n; i++) {
		container.push_back(i);
	}
		container.size();
		container.capacity();
	try {
		spanVar.addRange(container.begin(), container.end());
		// spanVar.addNumber(-203);
		std::cout	<< "Shortest Span: " << spanVar.shortestSpan() << std::endl;
		std::cout	<< "Longest Span: " << spanVar.longestSpan() << std::endl;
		
	}
	catch (Span::MaxCapacityReachedException e) {std::cout << e.what() << std::endl;}
	
	return 0;
}
