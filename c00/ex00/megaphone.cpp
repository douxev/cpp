/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:02:46 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/22 11:10:21 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

int	main(int ac, char **av)
{
	std::string phrase;

	if (ac < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	phrase = av[1];
	for (int i = 1; i < ac; i++)
	{
		if (i > 1 && (phrase.end()[-1] != ' ' && av[i][0] != ' '))
			std::cout << " ";
		phrase = av[i];
		std::transform(phrase.begin(), phrase.end(), phrase.begin(), ::toupper);
		std::cout << phrase;
	}
	std::cout << std::endl;
}
