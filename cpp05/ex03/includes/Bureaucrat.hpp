/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 23:07:54 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 12:46:13 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <sstream>
# include "AForm.hpp"

class AForm;

class Bureaucrat {

public:

	class GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw() {return ("GradeTooHighException");}
	};
	class GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw() {return ("GradeTooLowException");}
	};
	Bureaucrat( void );
	Bureaucrat( const std::string name );
	Bureaucrat( const int grade, const std::string name );
	Bureaucrat& operator=( const Bureaucrat& Other );
	Bureaucrat( const Bureaucrat& copied);
	~Bureaucrat();

	const std::string getName() const;
	unsigned char getGrade() const;
	void signForm( AForm& Other );
	void getRaise();
	void getCut();

	
private:

	const std::string	_name;
	unsigned char		_grade;
};

std::ostream    &operator<<( std::ostream& os, const Bureaucrat& Other);

#endif
