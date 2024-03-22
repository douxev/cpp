/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:27:28 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/22 11:55:02 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heap_allocated;

	heap_allocated = newZombie("Bwarfg");
	heap_allocated->announce();
	randomChump("Bwlfiodsf");


	delete heap_allocated;
	return (0);
}
