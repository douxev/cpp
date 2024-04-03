/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:51:25 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 12:58:17 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ):
AForm("Presidential Pardon", 25, 5), _target("Unknown") {}
PresidentialPardonForm::PresidentialPardonForm( const std::string target ):
AForm("Presidential Pardon", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& Other ):
AForm(Other), _target(Other._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {
	
}

void PresidentialPardonForm::actionateForm( void ) const {
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
