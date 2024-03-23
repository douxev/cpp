/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 12:00:40 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/23 21:00:52 by jdoukhan         ###   ########.fr       */
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
	void	complain( std::string level );

	private:

	struct	_s_message
	{
		void		(Harl::*f)(void);
		std::string	level;
	};
	struct	_s_message	message[4];

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};

#endif
