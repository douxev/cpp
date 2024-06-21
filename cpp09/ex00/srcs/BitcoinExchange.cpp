#include "../includes/BitcoinExchange.hpp"
#include <cstddef>
#include <sstream>
#include <string>
#include <map>
#include <algorithm>
#include <iostream>

BitcoinExchange::BitcoinExchange( void ) {

}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& Other ) {

}

BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange& Other ) {

}

BitcoinExchange::~BitcoinExchange() {

}

void	BitcoinExchange::add_value( std::string line ) {
	std::istringstream	line_is(line);
	std::string			date;
	std::string			value;
	if (!std::getline(line_is, date, ' '))
		return ;
	if (!std::getline(line_is, value, ' ') || !std::getline(line_is, value, ' '))
		return ;


	double new_val = std::stod(value.c_str());
	if (new_val < 0)
		throw NotPositiveException();
	else if (new_val > 1000)
		throw NumberTooBigException();

	//!Check if the date is the correct format.
	line_is.clear();
	line_is.str(date);
	std::string year;
	std::string month;
	std::string day;

	if (!std::getline(line_is, year, '-') ||
		!std::getline(line_is, month, '-') ||
		!std::getline(line_is, day, '-'))
		throw IncorrectDateFormatException();

	if (std::stod(year) > 2024 || std::stod(year) < 2009 ||
		std::stod(month) > 12 || std::stod(month) < 1 ||
		std::stod(day) > 31 || std::stod(day) < 1)
		throw IncorrectDateFormatException();

	if (!this->_data[date])
		this->_data[date] = new_val;
	else
		this->_data[date] *= new_val;

}

size_t	BitcoinExchange::get_value( std::string date ) const {
	if (std::find(_data.begin(), _data.end(), date) != _data.end())
		return this->_data.at(date);
	throw NoSuchKeyException();
}

void	BitcoinExchange::print_data( void ) {
	
	std::map<std::string, size_t>::iterator it; 

	for (std::map<std::string, size_t>::iterator it = _data.begin(); it != _data.end(); it++) {
		std::cout << it->first << " | " << it->second << std::endl;
	}

}

