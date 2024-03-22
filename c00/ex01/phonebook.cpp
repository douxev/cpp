/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:49:40 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/22 10:53:22 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::add(void)
{
	std::cout << "\033c";
	if (this->_i == 7)
		this->_i = 0;
	
	if (this->_contacts.at(this->_i))
		delete this->_contacts.at(this->_i);
	this->_contacts.at(this->_i) = new Contact;
	(this->_i)++;
	std::cout << "\033c";
	return ;
}

void PhoneBook::search(void)
{
	std::string	choice;

	std::cout << "\033c\033[4m" << \
	"                                             " << std::endl;
	std::cout << \
	"| No | First name |  Last name |   Nickname |" << std::endl;
	for (int i = 0; i < 8 && this->_contacts.at(i); i++)
	{
		std::cout << "|  " << i << " ";
		this->_contacts.at(i)->lprint();
	}
	std::cout << "\033[0m" << std::endl;
	std::cout << "Choose an index for details or anything to go back: ";
	getline(std::cin, choice);
	if ((choice == "0" || choice == "1" || choice == "2" || choice == "3" || \
	choice == "4" || choice == "5" || choice == "6" || choice == "7" || \
	choice == "8" || choice == "9") && this->_contacts.at(stod(choice)))
		this->_contacts.at(stod(choice))->print();
}

PhoneBook::PhoneBook(void)
{
	this->_i = 0;
	this->_contacts.fill(NULL);
}

PhoneBook::~PhoneBook(void)
{
	for (int i = 0; i < 8; i++)
	{
		if (this->_contacts.at(i))
			delete this->_contacts.at(i);
	}
}
