/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:22:54 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 16:22:02 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class Animal {

public:

	Animal( void );
	Animal& operator=( const Animal& Other );
	Animal( const Animal& copied);
	virtual ~Animal();
	std::string	getType( void ) const;
	virtual void	makeSound( void ) const;

protected:
	
	std::string	type;
};


#endif
