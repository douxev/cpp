/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:37:18 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 13:08:50 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class AForm {

public:
	class GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw() {return ("GradeTooLowException");}
	};
	class NotSignedException: public std::exception {
		public:
			virtual const char* what() const throw() {return ("NotSignedException");}
	};
	AForm( void );
	AForm( const std::string name, const int minSign, const int minExe );
	AForm& operator=( const AForm& Other );
	AForm( const AForm& copied);
	virtual ~AForm();

	const std::string getName( void );
	void beSigned( Bureaucrat& Other);
	void execute( const Bureaucrat& executor ) const;
	
protected:

	const std::string _name;
	bool _signed;
	const int _minSignGrade;
	const int _minExeGrade;
	
	virtual void actionateForm( void ) const = 0;
};

std::ostream    &operator<<( std::ostream& os, const AForm& Other);


#endif
