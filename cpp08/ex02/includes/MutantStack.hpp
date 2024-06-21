/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:01:44 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/06/19 12:06:24 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <deque>
#include <stack>

template <typename T>

class MutantStack: public std::stack<T, std::deque<T> > {
public:

	MutantStack( void ) {}
	MutantStack( const MutantStack& Other ): std::stack<T>(Other) {}

	MutantStack& operator=( const MutantStack& Other) {
		if (Other == *this)
			return this;
		this->c = Other.c;
		return this;
	}

	~MutantStack() { this->c.clear(); };

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin( void ) { return this->c.begin(); }
	iterator end( void ) { return this->c.end(); }

};



#endif
