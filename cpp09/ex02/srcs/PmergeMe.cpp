#include "../includes/PmergeMe.hpp"
#include <cstddef>
#include <iterator>
#include <list>
#include <utility>
#include <vector>
#include <iostream>

void print_vec(std::vector<size_t>& vec) {
	std::cout << "VEC:  ";
	for (std::vector<size_t>::iterator it = vec.begin(); it != vec.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}


std::vector<size_t>::iterator	break_the_loop(size_t value, std::vector<size_t>& vec) {
	std::vector<size_t>::iterator it = vec.begin() + (vec.size() - 1) / 2;

	size_t	start = 0;
	size_t	end = vec.size() - 2;

	while (start <= end) {
		it = vec.begin() + (start + end) / 2;

		if ((it == vec.begin() && *it > value)) {
			std::cout << "BEGIN " << value << std::endl;
			vec.insert(vec.begin(), value);
			break;
		}
		if (it > vec.begin() + end || it == vec.end() || it + 1 == vec.end()) {
			std::cout << "END " << value << std::endl;
			vec.push_back(value);
			break ;
		}
		if ((it >= vec.begin() + start && it < vec.begin() + end && *it < value && *(it + 1) > value)) {
			std::cout << "INSERT" << std::endl;
			vec.insert(it + 1, value);
			break ;
		}

		if (*it > value)
			start = (start + end) / 2;
		else
			end = (start + end) / 2;
		
	}

	print_vec(vec);
	return it;
}


void sort_vec(std::vector<size_t>& vec) {

	std::vector<std::pair<size_t, size_t> > vec_pairs;

	//!Sort the pairs
	for (std::vector<size_t>::iterator it = vec.begin(); it != vec.end();) {
		if ((it + 1) == vec.end()) {
			vec_pairs.push_back(std::make_pair(*it, *it));
			break ;
		}
		if (*it < *(it + 1))
			vec_pairs.push_back(std::make_pair(*it, *(it + 1)));
		else
			vec_pairs.push_back(std::make_pair(*(it + 1), *it));
		it++;
		if (it == vec.begin())
			break;
		it++;
	}

	//!sort the pairs between each other
	for (std::vector<std::pair<size_t, size_t> >::iterator it = vec_pairs.begin();
		it != vec_pairs.end() && (it + 1) != vec_pairs.end() && (it + 1)->second != (it + 1)->first; it++) {

		for (std::vector<std::pair<size_t, size_t> >::iterator it2 = it + 1;
			it2 != vec_pairs.end() ; it2++) {

			if (it2->second < it->second) {
				std::swap(*it, *it2);
				it = vec_pairs.begin();
				it2 = it + 1;
			}
		}
	}
	std::cout << "PAIRS SORTED" << std::endl;


	vec.clear();
	vec.push_back(vec_pairs.front().first);

	if (vec_pairs.front().first != vec_pairs.front().second)
		vec.push_back(vec_pairs.front().second);

	for (std::vector<std::pair<size_t, size_t> >::iterator it = vec_pairs.begin() + 1; it != vec_pairs.end(); it++) {
		
	break_the_loop(it->first, vec);
		


		if (it->first != it->second)
			vec.push_back(it->second);
	}



}


template <typename T>
typename std::list<T>::iterator get_next(typename std::list<T>::iterator it) {
	typename std::list<T>::iterator it2 = it;
	return ++it2;
}
void sort_lst(std::list<size_t>& lst) {

	
	std::list<std::pair<size_t, size_t> > lst_pairs;

	//!Sort the pairs
	for (std::list<size_t>::iterator it = lst.begin(); it != lst.end();) {
		if (get_next<size_t>(it) == lst.end()) {
			lst_pairs.push_back(std::make_pair(*it, *it));
			break ;
		}
		if (*it < *get_next<size_t>(it))
			lst_pairs.push_back(std::make_pair(*it, *(get_next<size_t>(it))));
		else
			lst_pairs.push_back(std::make_pair(*get_next<size_t>(it), *it));
		it++;
		it++;
	}

	for (std::list<std::pair<size_t, size_t> >::iterator it = lst_pairs.begin();
		it != lst_pairs.end() && get_next<std::pair<size_t, size_t> >(it) != lst_pairs.end() && get_next<std::pair<size_t, size_t> >(it)->second != get_next<std::pair<size_t, size_t> >(it)->first; it++) {

		for (std::list<std::pair<size_t, size_t> >::iterator it2 = get_next<std::pair<size_t, size_t> >(it);
			it2 != lst_pairs.end() ; it2++) {

			if (it2->second < it->second) {
				std::swap(*it, *it2);
				it = lst_pairs.begin();
				it2 = get_next<std::pair<size_t, size_t> >(it);
			}
		}
	}
	lst.clear();
	lst.push_back(lst_pairs.front().first);
	if (lst_pairs.front().first != lst_pairs.front().second)
		lst.push_back(lst_pairs.front().second);

	for (std::list<std::pair<size_t, size_t> >::iterator it = get_next<std::pair<size_t, size_t> >(lst_pairs.begin()); it != lst_pairs.end(); it++) {
		std::list<size_t>::iterator it2;
		for (it2 = lst.begin(); it2 != lst.end(); it2++) {
			if ((it2 == lst.begin() || *(it2) < it->first) && (get_next<size_t>(it2) == lst.end() || *(get_next<size_t>(it2)) > it->first))
				break ;
			if (get_next<size_t>(it2) == lst.end())
				break ;
		}
		if ((it->first < *it2)) //insert before
			lst.insert(lst.begin(), it->first);
		else if (it->first > *it2 && it->first < *(get_next<size_t>(it2)))
			lst.insert(get_next<size_t>(it2), it->first);
		else
			lst.push_back(it->first);
		if (it->first != it->second)
			lst.push_back(it->second);
	}
}