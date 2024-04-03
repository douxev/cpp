/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:37:11 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 10:30:25 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form( void ): _name("49.3"), _minSignGrade(150), _minExeGrade(150) {};
Form::Form( const std::string name, const int minSign, const int minExe ):
_name(name), _minSignGrade(minSign), _minExeGrade(minExe) {};


Form::Form( const Form& Other ):
_name(Other._name), _minSignGrade(Other._minSignGrade), _minExeGrade(Other._minExeGrade) {}

Form& Form::operator=( const Form& Other ) {
	this->_signed = Other._signed;
	return (*this);
}

Form::~Form() {
	std::cout << "Form " << this->_name << " destroyed." << std::endl;
}

void Form::beSigned( Bureaucrat& Other) {
	if (Other.getGrade() > this->_minSignGrade)
		throw Form::GradeTooLowException();
	else {
		this->_signed = true;
	}
}

const std::string Form::getName( void ) {return (this->_name);}