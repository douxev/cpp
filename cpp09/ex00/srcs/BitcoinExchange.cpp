#include "../includes/BitcoinExchange.hpp"
#include <cstddef>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <algorithm>
#include <iostream>

//!Load DataBase
BitcoinExchange::BitcoinExchange( void ) {
	std::ifstream	file(DATABASE);
	std::string		date;
	std::string		value;
	std::istringstream	line_is;
	std::string		line;

	if (!file.is_open() || !file.good()) {
		std::cerr << "Error: cannot open and read database '" << DATABASE << "'." << std::endl;
		std::exit(1);
	}
	while (file.is_open() && file.good()) {

		std::getline(file, line);
		line_is.clear();
		line_is.str(line);
		std::getline(line_is, date, ',');
		std::getline(line_is, value);
		try {
			this->is_correct(date, value);
		} catch (const std::exception& e) {
			std::cout << "Error: " << e.what() << std::endl;
			continue;
		}
		this->_data[date] = std::stod(value);
	}
	file.close();
}

void BitcoinExchange::load_file( std::string filename ) {
	std::ifstream	file(filename);
	std::string		line;

	if (!file.is_open() || !file.good()) {
		std::cerr << "Error: cannot open and read file '" << filename << "'." << std::endl;
		std::exit(1);
	}
	while (file.is_open() && file.good()) {
		std::getline(file, line);
		this->add_value(line);
	}
	file.close();
}

void BitcoinExchange::is_correct( std::string date, std::string value ) {

	std::istringstream	line_is;
	double new_val = std::stod(value.c_str());

	if (new_val < 0)
		throw NotPositiveException();
	else if (new_val > 1000)
		throw NumberTooBigException();

	line_is.clear();
	line_is.str(date);
	std::string year;
	std::string month;
	std::string day;

	if (!std::getline(line_is, year, '-') ||
		!std::getline(line_is, month, '-') ||
		!std::getline(line_is, day, '-'))
		throw IncorrectDateFormatException();

	size_t month_days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	size_t year_d = std::stod(year);
	size_t month_d = std::stod(month);
	size_t day_d = std::stod(day);

	if ((!year_d % 4 && year_d % 100) || !year_d % 400)
		month_days[2] = 29;

	if (month_d > 12 || month_d < 1 || day_d > month_days[month_d])
		throw IncorrectDateFormatException();

	if (std::stod(year) > 2024 || std::stod(year) < 2009 ||
		std::stod(month) > 12 || std::stod(month) < 1 ||
		std::stod(day) > 31 || std::stod(day) < 1)
		throw IncorrectDateFormatException();
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& Other ) {
	if (this != &Other)
		return ;
	this->_data = Other._data;
}

BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange& Other ) {
	if (this != &Other)
		return *this;
	this->_data = Other._data;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {
	this->_data.clear();
}

std::string	BitcoinExchange::look_below( std::string date ) {
	for ()
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
	
	try {
		this->is_correct(date, value);
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
		return ;
	}

	if (std::find(_data.begin(), _data.end(), date) != _data.end())
		this->_data[this->look_below(date)] *= new_val;
	this->_data[date] *= new_val;

}

size_t	BitcoinExchange::get_value( std::string date ) const {
	if (std::find(_data.begin(), _data.end(), date) != _data.end())
		return this->_data.at(date);
	throw NoSuchKeyException();
}

void	BitcoinExchange::print_data( void ) {

	for (std::map<std::string, double>::iterator it = _data.begin(); it != _data.end(); it++) {
		std::cout << it->first << " | " << it->second << std::endl;
	}

}

