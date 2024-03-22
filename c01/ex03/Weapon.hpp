/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:04:57 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/22 14:22:48 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string> 

class Weapon
{
	public:

	std::string const	&getType(void);
	void				setType(std::string type);
						Weapon(std::string weapon_type);
						Weapon(void);
						~Weapon(void);

	private:
	
	std::string _type;
};


#endif

