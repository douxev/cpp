/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:25:57 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/24 16:55:47 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:

	void 	announce(void);
			~Zombie(void);
	void	nameZomb(std::string name);

	private:

	std::string _name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif
