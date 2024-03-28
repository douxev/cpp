/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:22:26 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 17:01:54 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main( int ac, char **av )
{
	std::string	choice;
	if (ac > 1)
		choice  = av[1];
	if (ac == 1 || choice == "1")
	{
		const Animal* zoo[] = {
			new Cat(),
			new Cat(),
			new Cat(),
			new Dog(),
			new Dog(),
			new Dog(),
		};
		for (int i = 0; i < 6; i++) {
			zoo[i]->makeSound();
			delete zoo[i];
		}
	}
	else if (choice == "2")
	{
		const Cat* cat = new Cat();
		Animal* clone = new Cat(*cat);
		const Animal* cat2 = new Cat();
		*clone = *cat2;
	
		delete cat2;
		delete cat;
		delete clone;
	}

	return 0;
}
