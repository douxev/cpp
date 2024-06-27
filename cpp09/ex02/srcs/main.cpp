/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:31:13 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/06/27 15:52:53 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstddef>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <list>
#include <cstdlib>
#include <vector>
#include "../includes/PmergeMe.hpp"

int	main( int ac, char **av ) {

	if (ac < 3) {
		std::cerr << "Error: GIVE MORE." << std::endl;
		std::exit(1);
	}

	std:: vector<size_t>	vec;
	std::list<size_t>		lst;
	double					nb;

	for (int i = 1; i < ac; i++) {
		nb = std::strtod(av[i], NULL);
		vec.push_back(nb);
		lst.push_back(nb);
	}
	std::cout << "Before: ";
	for (std::vector<size_t>::iterator it = vec.begin(); it != vec.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	const std::clock_t c_start_vec = std::clock();
	sort_vec(vec);	
	const std::clock_t c_end_vec = std::clock();

	std::cout << "VEC After:  ";
	for (std::vector<size_t>::iterator it = vec.begin(); it != vec.end(); it++) {
		std::cout << *it << " ";
	}
	
	const std::clock_t c_start_lst = std::clock();
	sort_lst(lst);
	const std::clock_t c_end_lst = std::clock();

	
	std::cout << std::endl;

	std::cout << "LST After:  ";
	for (std::list<size_t>::iterator it = lst.begin(); it != lst.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << std::fixed << std::setprecision(4) << "Time to process a range of " << ac - 1 << " elements with std::vector: " << (double) (c_end_vec - c_start_vec) / CLOCKS_PER_SEC << " ms" << std::endl;
	std::cout << std::fixed << std::setprecision(4) <<  "Time to process a range of " << ac - 1 << " elements with std::list:   " << (double) (c_end_lst - c_start_lst) / CLOCKS_PER_SEC << " ms" << std::endl;

}
