/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:53:56 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 13:23:15 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( void ):
AForm("Robotomy Request", 72, 45), _target("Unknown") {}

RobotomyRequestForm::RobotomyRequestForm( const std::string target ):
AForm("Robotomy Request", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& Other ):
AForm(Other), _target(Other._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {

}

void RobotomyRequestForm::actionateForm( void ) const {
	std::cout	<< "BZZZZZZZZZZ" << std::endl
				<< "BZZZZZZZZZZZZZZZZ" << std::endl
				<< "BZZZZ" << std::endl;
	if (std::rand() % 2)
		std::cout << this->_target << "'s Robotomy failed." << std::endl;
	else
		std::cout << this->_target << " has been Robotomized successfully." << std::endl;
}
