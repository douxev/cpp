/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:04:10 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/24 14:39:34 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:

	void	attack(void);
	void	setWeapon(Weapon &weapon_class);
			HumanA(std::string name, Weapon &weapon_class);
			~HumanA(void);

	private:
	
	Weapon		&_weapon;
	std::string	_name;
};

#endif
