/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:31:13 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/08 12:36:18 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main( void )
{
	Data* dat = new Data(132);
	uintptr_t value;
	Data* ret;
	
	std::cout << "Data pointer value: " << dat << std::endl;
	value = Serializer::serialize(dat);
	std::cout << "Serialized value: " << value << std::endl;
	ret = Serializer::deserialize(value);
	std::cout << "Deserialized Data pointer value: " << ret << std::endl;
	return (0);
}
