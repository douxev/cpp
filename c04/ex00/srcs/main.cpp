/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:22:26 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/28 11:54:36 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main( void )
{
	const Animal* meta = new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();
	std::cout << dog->getType() << " dog var" << std::endl;
	std::cout << cat->getType() << " cat var" << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	meta->makeSound();
	

	WrongAnimal* wrong = new WrongAnimal();	
	
	std::cout << wrong->getType() << ": wrong" << std::endl;
	wrong->makeSound();
	delete wrong;
	
	wrong = new WrongCat();
	std::cout << wrong->getType() << ": wrong" << std::endl;
	wrong->makeSound();
	
	delete wrong;

	
	delete dog;
	delete cat;
	delete meta;
	return 0;
}
