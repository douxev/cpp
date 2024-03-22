/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:59:06 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/22 12:47:16 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*Zomb;

	Zomb = new Zombie[N];
	for (int i = 0; i < N; i++)
		Zomb[i].nameZomb(name + "_" + std::to_string(i + 1));
	return (Zomb);
}
