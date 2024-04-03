/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:00:13 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 14:57:58 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main( void )
{
		Bureaucrat manu( 42, "Manu" );
		PresidentialPardonForm	ppform("Gerald");
		RobotomyRequestForm		rrform("Eric");
		ShrubberyCreationForm	scform("Palais");
		
		manu.signForm(scform);
		manu.signForm(rrform);
		manu.signForm(ppform);
		scform.execute(manu);
		rrform.execute(manu);
		rrform.execute(manu);
		
		Bureaucrat	zaphod(1, "Zaphod");
		zaphod.signForm(ppform);
		ppform.execute(zaphod);
		
	return (0);
}
