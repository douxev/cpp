/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:00:02 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/03/29 20:58:16 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

void Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
