/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:24:45 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 17:16:35 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:

	ScavTrap( void );
	ScavTrap( std::string name);
	~ScavTrap( void );

	void	guardGate( void );
	void	attack( const std::string& target );

private:
	
};


#endif
