/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:43:35 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 16:39:49 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main( void ) {
	ClapTrap	Clap("Marcelo");
	ScavTrap	Scav("Donna");
	FragTrap	Frag("Filipout");

	Frag.attack(Clap.getName());
	Clap.takeDamage(8);
	Frag.highFivesGuys();
	
	return (0);
}