/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:09:15 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/21 16:26:35 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(void)
{
	std::cout << "first name: ";
	getline(std::cin, this->_first_name);
	std::cout << "last name: ";
	getline(std::cin, this->_last_name);
	std::cout << "nickname: ";
	getline(std::cin, this->_nickname);
	std::cout << "number: ";
	std::cin >> this->_number;
	std::cout << "darkest secret: ";
	getline(std::cin, this->_darkest_secret);
	std::cout << std::endl;
	return ;
}

void	Contact::print(void)
{
	std::cout << "first_name: " << this->_first_name << std::endl;
	std::cout << "last_name: " << this->_last_name << std::endl;
	std::cout << "nickname: " << this->_nickname << std::endl;
	std::cout << "number: " << this->_number << std::endl;
	std::cout << "darkest_secret: " << this->_darkest_secret << std::endl;
}
