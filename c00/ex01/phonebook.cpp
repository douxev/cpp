/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:49:40 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/21 16:16:23 by jdoukhan         ###   ########.fr       */
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
