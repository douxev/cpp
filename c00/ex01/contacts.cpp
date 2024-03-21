/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:09:15 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/21 17:15:22 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static int	ft_isnumber(std::string str)
{
	for (int i = 0; i < (int) str.size(); i++)
	{
		if (str.at(i) < 48 || str.at(i) > 58)
			return (0);
	}
	return (1);
}

Contact::Contact(void)
{
	while (this->_first_name.empty())
	{
		std::cout << "first name: ";
		getline(std::cin, this->_first_name);
	}
	while (this->_last_name.empty())
	{
		std::cout << "last name: ";
		getline(std::cin, this->_last_name);
	}
	while (this->_nickname.empty())
	{
		std::cout << "nickname: ";
		getline(std::cin, this->_nickname);
	}
	while (this->_number.empty() || !ft_isnumber(this->_number))
	{
		std::cout << "number: ";
		getline(std::cin, this->_number);
	}
		while (this->_darkest_secret.empty())
	{
		std::cout << "darkest secret: ";
		getline(std::cin, this->_darkest_secret);
	}
	std::cout << std::endl;
	return ;
}

static void	ft_format(std::string str)
{
	if (str.size() <= 10)
	{
		std::cout << "| ";
		for (int i = 0; i < 10 - (int) str.size(); i++)
			std::cout << " ";
		std::cout << str << " ";
	}
	else
	{
		std::cout << "| ";
		for (int i = 0; i < 9; i++)
			std::cout << str.at(i);
		std::cout << ". ";
	}
}

void	Contact::lprint(void)
{
	ft_format(this->_first_name);
	ft_format(this->_last_name);
	ft_format(this->_nickname);
	ft_format(this->_number);
	ft_format(this->_darkest_secret);
	std::cout << "|" << std::endl;
}

void	Contact::print(void)
{
	std::cout << "first_name: " << this->_first_name << std::endl;
	std::cout << "last_name: " << this->_last_name << std::endl;
	std::cout << "nickname: " << this->_nickname << std::endl;
	std::cout << "number: " << this->_number << std::endl;
	std::cout << "darkest_secret: " << this->_darkest_secret << std::endl;
}
