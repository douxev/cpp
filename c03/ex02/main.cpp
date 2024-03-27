/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:43:35 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 16:28:16 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main( void ) {
	ClapTrap	Clap("Marcelo");
	ScavTrap	Scav("Donna");
	
	Scav.attack(Clap.getName());
	Clap.takeDamage(8);
	Clap.beRepaired(3);
	Scav.guardGate();
	
	return (0);
}