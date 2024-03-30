/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:59:38 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/30 12:11:51 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria {

public:

	Cure ( void );
	Cure ( const Cure& Other);
	Cure& operator=( const Cure& Other);
	~Cure( void );
	virtual AMateria* clone( void ) const;
	virtual void use( ICharacter& target );

private:

	/* data */
};



#endif
