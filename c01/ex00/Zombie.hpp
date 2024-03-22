/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:25:57 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/22 11:51:28 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <array>
# include <algorithm> 

class Zombie
{
	public:

	void 	announce(void);
	
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	private:

	std::string _name;
};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );

#endif
