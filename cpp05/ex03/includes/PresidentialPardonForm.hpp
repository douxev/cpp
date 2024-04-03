/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:51:19 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 12:56:14 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm: public AForm {

public:

	PresidentialPardonForm( void );
	PresidentialPardonForm( const std::string target );
	PresidentialPardonForm( const PresidentialPardonForm& copied);
	~PresidentialPardonForm();

private:

	void actionateForm( void ) const;
	
	const std::string _target;
};



#endif
