/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:48:44 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 13:14:17 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ):
AForm("Shrubbery Creation", 145, 137), _target("Unknown") {}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ):
AForm("Shrubbery Creation", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& Other ):
AForm(Other), _target(Other._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

void ShrubberyCreationForm::actionateForm( void ) const {
	std::ofstream file;
	file.open((this->_target + "_shrubbery").c_str());
	if (!file.is_open())
		return (throw FileCreationException());
	file	<< "              v .   ._, |_  .," 			<< std::endl
			<< "           `-._\\/  .  \\ /    |/_" 		<< std::endl
			<< "                \\  _\\, y | \\//" 			<< std::endl
			<< "           _\\_.___\\, \\/ -.\\||" 			<< std::endl
			<< "           `7-,--.`._||  / / ," 			<< std::endl
			<< "           /'     `-. `./ / |/_.'" 			<< std::endl
			<< "                     |    |//" 				<< std::endl
			<< "                     |_    /" 				<< std::endl
			<< "                     |-   |" 				<< std::endl
			<< "                     |   =|" 				<< std::endl
			<< "                     |    |" 				<< std::endl
			<< "--------------------/ ,  . \\--------._"	<< std::endl;
	file.close();
}
