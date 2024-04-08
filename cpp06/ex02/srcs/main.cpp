/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:31:13 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/08 13:11:42 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>

static Base* generate( void ) {
	srand(time(NULL));
	switch (rand() % 3) {
		case 0:
			std::cout << "A Generated." << std::endl;
			return (new A);
		case 1:
			std::cout << "B Generated." << std::endl;
			return (new B);
		case 2:
			std::cout << "C Generated." << std::endl;
			return (new C);
	}
	return (NULL);
}

static void identify( Base* p ) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A Class identified. (*)" << std::endl;
	}
	else if (dynamic_cast<B*>(p)) {
		std::cout << "B Class identified. (*)" << std::endl;
	}
	else if (dynamic_cast<C*>(p)) {
		std::cout << "C Class identified. (*)" << std::endl;
	}
}

static void identify( Base& p ) {
	try {
		(void) dynamic_cast<A&>(p);
		std::cout << "A Class identified. (&)" << std::endl;
		return ;
	}
	catch (...) {}
	try {
		(void) dynamic_cast<B&>(p);
		std::cout << "B Class identified. (&)" << std::endl;
		return ;
	}
	catch (...) {}
	try {
		(void) dynamic_cast<C&>(p);
		std::cout << "C Class identified. (&)" << std::endl;
		return ;
	}
	catch (...) {}
}

int	main( void )
{
	identify(generate());
	identify(*generate());
	return (0);
}
