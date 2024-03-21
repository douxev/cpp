/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:07:39 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/21 16:46:02 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE_HPP
# define MEGAPHONE_HPP

#include <iostream>
#include <string>
#include <array>

class Contact
{
	public:
	
	Contact(void);
	void	lprint(void);
	void	print(void);

	private:

	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string	_number;
	std::string	_darkest_secret;
};

class PhoneBook
{
	public:
	
	void	add(void);
	void	search(void);

	PhoneBook();
	~PhoneBook();

	private:
	
	std::array<Contact *, 8>	_contacts;
	int							_i;
};

#endif
