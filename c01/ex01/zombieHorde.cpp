/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:59:06 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/24 16:55:39 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*Zomb;

	Zomb = new Zombie[N];
	for (int i = 0; i < N; i++) {
		std::stringstream sstr;
		sstr << i + 1;
		Zomb[i].nameZomb(name + "_" + sstr.str());
	}
	return (Zomb);
}
