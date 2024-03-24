/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:00:40 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/24 15:57:50 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>
# include <algorithm>

class Harl
{
	public:

	Harl(void);
	Harl(std::string level);
	void	complain( std::string level );

	private:

	struct	_s_message
	{
		std::string	level;
		void		(Harl::*f)(void);
	};
	struct	_s_message	_message[4];


	void	init_message(void);
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	std::string _level;
};

#endif
