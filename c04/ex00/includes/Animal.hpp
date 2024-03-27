/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:22:54 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 18:43:32 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {

public:

	void	makeSound( void );
	Animal( void );
	Animal& operator=( const Animal& Other );
	Animal( const Animal& copied);
	~Animal();
	std::string	getType( void );

protected:

	std::string	type;
	std::string sound;
};


#endif
