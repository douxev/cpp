/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:11:50 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/23 11:55:21 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

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
		index += dest.size() - src.size();
		if (index < 0)
			index = 0;
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
	if (src.size() == 0)
		return (std::cout << "Error, passed string invalid." << std::endl, 1);
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
