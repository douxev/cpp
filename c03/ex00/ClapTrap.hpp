/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:16:22 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/27 14:35:28 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {

public:

	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap& operator=( const ClapTrap& Other );
	ClapTrap( const ClapTrap& copied);
	~ClapTrap();

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	const std::string	getName( void ) const;
private:

	std::string	_name;
	int			_hitpoints;
	int			_energy;
	int			_attack;
};




#endif
