/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:41:05 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 12:56:04 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm: public AForm {

public:
	class FileCreationException: public std::exception {
		public:
			virtual const char* what() const throw() {return ("FileCreationException");}
	};
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( const std::string target );
	ShrubberyCreationForm( const ShrubberyCreationForm& copied);
	~ShrubberyCreationForm();

private:

	void actionateForm( void ) const;

	const std::string _target;

};



#endif
