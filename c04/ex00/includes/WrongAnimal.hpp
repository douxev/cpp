/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:22:54 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 10:25:45 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal {

public:

	WrongAnimal( void );
	WrongAnimal& operator=( const WrongAnimal& Other );
	WrongAnimal( const WrongAnimal& copied);
	~WrongAnimal();
	std::string	getType( void ) const;
	void	makeSound( void ) const;

protected:

	std::string	type;
	std::string sound;
};


#endif
