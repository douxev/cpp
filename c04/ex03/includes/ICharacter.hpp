/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:08:47 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/30 13:08:47 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

class AMateria;

class ICharacter {
public:
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual std::string const & getName() const = 0;
	virtual void use(int idx, ICharacter& target) = 0;
	virtual AMateria* get_Materia( unsigned int idx ) const = 0;
	virtual ~ICharacter();

protected:
	std::string name;
	AMateria* item[4];
};


#endif
