/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:25:26 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 15:09:21 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

void Intern::initlst( void ) {
	this->_formlst[0] = (struct s_formlst) {.name="Presidential Pardon", .f = &Intern::_makePPForm};
	this->_formlst[1] = (struct s_formlst) {.name="Robotomy Request", .f = &Intern::_makeRRForm};
	this->_formlst[2] = (struct s_formlst) {.name="Shrubbery Creation", .f = &Intern::_makeSCForm};
}

Intern::Intern( void ) {
	initlst();
}

Intern::Intern( const Intern& Other ) {
	(void) Other;
	initlst();
}

Intern& Intern::operator=( const Intern& Other ) {
	(void) Other;
	return (*this);
}

Intern::~Intern() {
	
}

AForm& Intern::_makePPForm( const std::string target ) {
	PresidentialPardonForm* ppform = new PresidentialPardonForm(target);
	return (*ppform);
}

AForm& Intern::_makeRRForm( const std::string target ) {
	RobotomyRequestForm* rrform = new RobotomyRequestForm(target);
	return (*rrform);
}

AForm& Intern::_makeSCForm( const std::string target ) {
	ShrubberyCreationForm* scform = new ShrubberyCreationForm(target);
	return (*scform);
}

AForm* Intern::makeForm( std::string form, std::string target ) {
	for (int i = 0; i < 3; i++) {
		if (this->_formlst[i].name == form)
		{
			std::cout << "Intern creates " << this->_formlst[i].name << "." << std::endl;
			return (&(this->*_formlst[i].f)(target));
		}
	}
	std::cout << "'" << target << "' is not a valid Form." << std::endl;
	return (NULL);
}
