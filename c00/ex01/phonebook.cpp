/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:49:40 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/21 17:20:55 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::add(void)
{
	if (this->_i == 7)
		this->_i = 0;
	
	if (this->_contacts.at(this->_i))
		delete this->_contacts.at(this->_i);
	this->_contacts.at(this->_i) = new Contact;
	(this->_i)++;
	return ;
}

void PhoneBook::search(void)
{
	std::cout << \
	"| First name |  Last name |   Nickname |     Number |     Secret |" << std::endl;
	for (int i = 0; i < 8 && this->_contacts.at(i); i++)
		this->_contacts.at(i)->lprint();
	return ;
}

PhoneBook::PhoneBook(void)
{
	this->_i = 0;
	this->_contacts.fill(NULL);
}

PhoneBook::~PhoneBook(void)
{
	
}
