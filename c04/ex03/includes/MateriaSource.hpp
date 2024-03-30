/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:28:48 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/30 13:02:27 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

public:
	MateriaSource( void );
	MateriaSource( const MateriaSource& Other);
	MateriaSource& operator=( const MateriaSource& Other);
	~MateriaSource();

	void learnMateria( AMateria* m );
	AMateria* createMateria( std::string const & type );

private:
	AMateria* _storage[4];

};



#endif
