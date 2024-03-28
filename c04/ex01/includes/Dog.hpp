/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:22:54 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 16:05:01 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <string>
# include <iostream>

class Dog: public Animal {

public:

	Dog( const Dog& Other );
	Dog( void );
	~Dog();
	Dog& operator=( const Dog& Other );
	void	makeSound( void ) const;

private:

	Brain* _brain;

};


#endif
