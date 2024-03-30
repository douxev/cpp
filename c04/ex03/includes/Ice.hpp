/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:59:45 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/30 11:34:10 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria{

public:

	Ice( void );
	Ice( const Ice& Other);
	Ice& operator=( const Ice& Other);
	~Ice( void );
	
	virtual AMateria* clone( void ) const;
	virtual void use(ICharacter& target);

private:

};



#endif
