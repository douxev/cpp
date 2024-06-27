/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:31:13 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/06/25 14:27:14 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstddef>
#include <iostream>
#include <stack>
#include <cstdlib>
#include "../includes/RPN.hpp"

int	main( int ac, char **av ) {
	if (ac != 2) {
		std::cerr << "Error: No input string given." << std::endl;
	}
	
	std::string line = av[1];

	size_t i = 0;
	std::stack<int>	stack;

	int	k = 0;
	int	l = 0;

	while (i < line.size()) {
		if (std::isdigit(line.at(i))) {
			if (stack.size() > 2) {
				std::cerr << "Error: stack size too big." << std::endl;
				std::exit(1);
			}
			stack.push(line.at(i) - 48);
			if (i + 2 >= line.size())
				break ;
			i += 2;
			continue;
		}
		if (stack.size() < 2) {
			std::cerr << "Error: stack size too low." << std::endl;
			std::exit(1);
		}
		l = stack.top();
		stack.pop();
		k = stack.top();
		stack.pop();

		if (line.at(i) == '*') {
			stack.push(k * l);
		}
		else if (line.at(i) == '/') {
			if (l == 0) {
				std::cerr << "Error: division by zero." << std::endl;
				std::exit(1);
			}
			stack.push(k / l);
		}
		else if (line.at(i) == '+') {
			stack.push(k + l);
		}
		else if (line.at(i) == '-') {
			stack.push(k - l);
		}
		if (i + 2 >= line.size())
			break ;
		i += 2;
	}
	if (stack.size() != 1) {
		std::cerr << "Error: Calculation does not lead to one number at the end." << std::endl;
		std::exit(1);
	}
	std::cout << stack.top() << std::endl;
}
