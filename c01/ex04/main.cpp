/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:11:50 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/22 16:06:02 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string	ft_replace(std::string str, std::string src, std::string dest)
{
	while (str.find(src) != std::string::npos)
	{
		str.insert(str.find(src), dest);
		str.erase(str.find(src), src.size());
		// replaced += str.substr(0, str.find(src));
		// replaced += dest;
		// src = src. (src, src.size(), src.find(src));
	}
	return (str);
}

int	main(int ac, char **av)
{
	std::string		filename;
	std::string		src;
	std::string		dest;
	std::string		str;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (ac != 4)
		return (0);
	filename = av[1];
	src = av[2];
	dest = av[3];
	
	infile.open(filename);
	outfile.open((filename + ".replace"));
	
	while(getline(infile, str))
	{
		outfile << ft_replace(str, src, dest) << std::endl;
	}
	outfile.close();
	infile.close();
	return (0);
}
