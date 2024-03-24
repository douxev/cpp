/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:11:50 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/24 16:46:06 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include <fcntl.h>

std::string	ft_replace(std::string str, std::string src, std::string dest)
{
	int		index;

	if (src == dest)
		return (str);
	index = 0;
	while (str.substr(index).size() >= src.size() && str.substr(index).find(src) != std::string::npos)
	{
		index += str.substr(index).find(src);
		str.erase(index, src.size());
		str.insert(index, dest);
		index += dest.size();
		if (index < 0)
			index = 0;
	}
	return (str);
}

int	main(int ac, char **av)
{
	std::string			filename;
	std::string			src;
	std::string			dest;
	std::stringstream	buf;
	std::ifstream		infile;
	std::ofstream		outfile;

	if (ac != 4)
		return (0);
	filename = av[1];
	src = av[2];
	dest = av[3];
	if (src.size() == 0)
		return (std::cout << "Error, passed string invalid." << std::endl, 1);
	infile.open(filename.c_str());
	if (!infile.is_open())
	{
		std::cout << "Error: input file could not be opened." << std::endl;
		return (1);
	}

	outfile.open((filename + ".replace").c_str());
	if (!outfile.is_open())
	{
		infile.close();
		std::cout << "Error: output file could not be created/opened." << std::endl;
		return (1);
	}

	buf << infile.rdbuf();
	outfile << ft_replace(buf.str(), src, dest);

	outfile.close();
	infile.close();
	return (0);
}
