/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:27:28 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/24 14:34:17 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "str adress: " << &str << " = "<< str << std::endl;
	std::cout << "ptr adress: " << ptr << " = "<< *ptr << std::endl;
	std::cout << "ref adress: " << &ref << " = "<< ref << std::endl;
}
