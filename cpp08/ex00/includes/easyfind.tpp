/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:12:27 by jdoukhan          #+#    #+#             */
/*   Updated: 2024/04/09 16:55:10 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template <typename T>
typename T::iterator easyfind(T& obj, int nb) {
	return (std::find(obj.begin(), obj.end(), nb));
	}
