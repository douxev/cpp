/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:25:26 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 13:41:53 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {

}

Intern::Intern( const Intern& Other ) {

}

Intern& Intern::operator=( const Intern& Other ) {

}

Intern::~Intern() {

}

PresidentialPardonForm& Intern::_makePPForm( const std::string target ) {
	PresidentialPardonForm* ppform = new PresidentialPardonForm(target);
	return (*ppform);
}

RobotomyRequestForm& Intern::_makeRRForm( const std::string target ) {
	RobotomyRequestForm* rrform = new RobotomyRequestForm(target);
	return (*rrform);
}

ShrubberyCreationForm& Intern::_SCForm( const std::string target ) {
	ShrubberyCreationForm* scform = new ShrubberyCreationForm(target);
	return (*scform);
}
