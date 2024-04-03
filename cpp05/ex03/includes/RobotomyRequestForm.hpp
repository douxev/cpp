/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:54:10 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/03 12:56:09 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm: public AForm {

public:

	RobotomyRequestForm( void );
	RobotomyRequestForm( const std::string target );
	RobotomyRequestForm( const RobotomyRequestForm& copied);
	~RobotomyRequestForm();

private:

	void actionateForm( void ) const;
	
	const std::string _target;
};



#endif
