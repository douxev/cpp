/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:37:11 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 10:30:25 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>

AForm::AForm( void ): _name("49.3"), _minSignGrade(150), _minExeGrade(150) {};
AForm::AForm( const std::string name, const int minSign, const int minExe ):
_name(name), _minSignGrade(minSign), _minExeGrade(minExe) {};


AForm::AForm( const AForm& Other ):
_name(Other._name), _minSignGrade(Other._minSignGrade), _minExeGrade(Other._minExeGrade) {}

AForm& AForm::operator=( const AForm& Other ) {
	this->_signed = Other._signed;
	return (*this);
}

AForm::~AForm() {
	std::cout << "\033[0;91m" << this->_name << " destroyed.\033[0m" << std::endl;
}

void AForm::beSigned( Bureaucrat& Other) {
	if (Other.getGrade() > this->_minSignGrade)
		throw AForm::GradeTooLowException();
	else {
		this->_signed = true;
	}
}

const std::string AForm::getName( void ) {return (this->_name);}

void AForm::execute( const Bureaucrat& executor ) const {
	if (!this->_signed)
		return (throw AForm::NotSignedException());
	if (executor.getGrade() > this->_minExeGrade)
		return (throw AForm::GradeTooLowException());
	actionateForm();
	std::cout << "\033[0;32m" << executor.getName() << " executed " << this->_name << ".\033[0m" << std::endl;
}
