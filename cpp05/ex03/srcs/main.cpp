/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:00:13 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 15:04:02 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main( void )
{
		Bureaucrat manu( 1, "Manu" );
		Intern elizabeth;
		AForm*	form;
		form = elizabeth.makeForm("Presidential Pardon", "Gerald");
		manu.signForm(*form);
		form->execute(manu);
		
		
		
	return (0);
}
