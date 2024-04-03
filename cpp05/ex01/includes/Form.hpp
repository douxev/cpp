/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:37:18 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 10:29:58 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:
	class GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw() {return ("GradeTooLowException");}
	};

	Form( void );
	Form( const std::string name, const int minSign, const int minExe );
	Form& operator=( const Form& Other );
	Form( const Form& copied);
	~Form();

	const std::string getName( void );
	void beSigned( Bureaucrat& Other);
private:

	const std::string _name;
	bool _signed;
	const int _minSignGrade;
	const int _minExeGrade;
};

std::ostream    &operator<<( std::ostream& os, const Form& Other);


#endif
