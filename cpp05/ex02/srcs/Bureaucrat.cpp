/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 23:07:47 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 13:22:47 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat( void ): _name("NoOne"), _grade(150) {}
Bureaucrat::Bureaucrat( const std::string name ): _name(name), _grade(150) {}
Bureaucrat::Bureaucrat( const int grade, const std::string name ): _name(name), _grade(grade) {}
Bureaucrat::Bureaucrat( const Bureaucrat& Other ): _name(Other._name), _grade(Other._grade) {}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& Other ) {
	// this->_name = Other._name; // name is const, cannot change your name.
	this->_grade = Other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "\033[0;91mBureaucrat " << this->_name << " got fired.\033[0m" << std::endl;
}

const std::string Bureaucrat::getName() const {
	return (this->_name);
}

unsigned char Bureaucrat::getGrade() const {
	return (this->_grade);
}


void Bureaucrat::signForm( AForm& Other ) {
	try {
		Other.beSigned(*this);
	}
		catch (AForm::GradeTooLowException& e) {
			std::cout	<< "\033[0;32m"
						<< this->_name << " couldn't sign " << Other.getName()
						<< " because " << e.what() << "\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[0;32m" << this->_name << " signed " << Other.getName() << ".\033[0m" << std::endl;
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

