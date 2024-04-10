/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:51:44 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/10 12:26:16 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <cstddef>
# include <exception>

class Span {

private:

	typedef std::vector<int>::iterator iter;
	unsigned int _N;
	std::vector<int> _tab;

public:

	Span( void );
	Span( const unsigned int N );
	Span& operator=( const Span& Other );
	Span( const Span& copied);
	~Span();

	void addNumber( const int nb );
	void addRange( iter start, iter end );
	unsigned int shortestSpan( void ) const;
	unsigned int longestSpan( void ) const;
	unsigned int size( void ) const;

	class MaxCapacityReachedException: public std::exception {
	public: virtual const char* what() const throw() {return ("MaxCapacityReachedException");}
	};
	class TooFewNumbersException: public std::exception {
	public: virtual const char* what() const throw() {return ("TooFewNumbersException");}
	};
};



#endif
