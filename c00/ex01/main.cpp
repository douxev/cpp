/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:02:46 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/22 10:53:22 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	PhoneBook PB;
	std::string prompt;

	std::cout << "\033c";
	while (1)
	{
		std::cout << "ADD, SEARCH or EXIT: ";
		getline(std::cin, prompt);
		if (prompt == "ADD")
			PB.add();
		else if (prompt == "SEARCH")
			PB.search();
		else if (prompt == "EXIT")
			return (0);
		else
			std::cout << "\033c"<< prompt << ": command not available." << std::endl;
		prompt.erase();
	}
}
