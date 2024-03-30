/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 23:07:54 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/30 23:55:59 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>

class Bureaucrat {

public:

	class GradeException: public std::exception {
		private:
			std::string _message;
		public:
			GradeException(std::string msg): _message(msg) {}
			virtual const char* what() const throw() {return (_message.c_str());}
			// virtual ~GradeException() {}
	};
	
	Bureaucrat( void );
	Bureaucrat( std::string name );
	Bureaucrat& operator=( const Bureaucrat& Other );
	Bureaucrat( const Bureaucrat& copied);
	~Bureaucrat();

	const std::string getName() const;
	unsigned char getGrade() const;
	void getRaise();
	void getCut();

private:

	const std::string	_name;
	unsigned char		_grade;
};



#endif
