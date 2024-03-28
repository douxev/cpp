/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:17:21 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 16:03:49 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Brain {

public:

	Brain( void );
	Brain( const Brain& Other );
	Brain& operator=( const Brain& Other );
	~Brain();

protected:

	std::string	ideas[100];
};



#endif
