/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:20:07 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/08 12:26:11 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP


class Data {

public:

	Data( void );
	Data( int nb );
	Data& operator=( const Data& Other );
	Data& operator=( const int nb );
	Data( const Data& copied);
	~Data();

	int getNb( void );
	void setNb( int nb );

private:

	int _nb;
};



#endif
