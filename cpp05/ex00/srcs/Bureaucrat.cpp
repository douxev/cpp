/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 23:07:47 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/31 14:34:17 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("NoOne"), _grade(150) {}
Bureaucrat::Bureaucrat( std::string name ): _name(name), _grade(150) {}
Bureaucrat::Bureaucrat( const Bureaucrat& Other ): _name(Other._name), _grade(Other._grade) {}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& Other ) {
	// this->_name = Other._name; // name is const, cannot change your name.
	this->_grade = Other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {

}

const std::string Bureaucrat::getName() const {
	return (this->_name);
}

unsigned char Bureaucrat::getGrade() const {
	return (this->_grade);
}

void Bureaucrat::getRaise() {
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::getCut() {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

std::ostream    &operator<<( std::ostream& os, const Bureaucrat& Other)
{
	std::stringstream grade;
	grade << Other.getGrade() + 0;
	os << Other.getName() + ", bureaucrat grade " + grade.str();
        return (os); 
}