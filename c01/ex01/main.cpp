/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:27:28 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/22 12:47:50 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heap_allocated;

	heap_allocated = zombieHorde(12, "Bwarg");
	for (int i = 0; i < 12; i++)
		heap_allocated[i].announce();
	delete[] heap_allocated;
	return (0);
}
