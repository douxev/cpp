/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:25:32 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 13:41:59 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class AForm;

class Intern {

public:

	Intern( void );
	Intern& operator=( const Intern& Other );
	Intern( const Intern& copied);
	~Intern();

	AForm& makeForm( std::string form, std::string target );

private:

	struct s_formlst {
		std::string name;
		void (Intern::*f)( void );
	};
	struct s_formlst _formlst[3];
	PresidentialPardonForm& _makePPForm( const std::string target );
	RobotomyRequestForm& _makeRRForm( const std::string target );
	ShrubberyCreationForm& _SCForm( const std::string target );
};



#endif
