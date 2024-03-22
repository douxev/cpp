/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:04:36 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/22 14:38:58 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	public:

	void	attack(void);
	void	setWeapon(Weapon &weapon_class);
			HumanB(std::string name);
			HumanB(void);
			~HumanB(void);

	private:

	Weapon		_weapon;
	std::string	_name;
};

#endif
