/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:27:23 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 15:02:16 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "\033[0;32m✔️WrongCat Default Constructor called.\033[0m" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "\033[0;91m✗WrongCat Destructor called.\033[0m" << std::endl;
}

void	WrongCat::makeSound( void ) const{
	std::cout << "* weird Miaou *" << std::endl;
}