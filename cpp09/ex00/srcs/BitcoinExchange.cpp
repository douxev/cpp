#include "../includes/BitcoinExchange.hpp"
#include <cstddef>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <iostream>
#include <utility>

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
		if (date == "date")
			continue;

		try {
			this->is_correct(date, value);
		} catch (NumberTooBigException& e) {

		}
		catch (const std::exception& e) {
			std::cout << "Error: " << e.what() << std::endl;
			continue;
		}
		this->_data[date] = std::atof(value.c_str());
	}
	file.close();
}

void BitcoinExchange::load_file( std::string filename ) {
	std::ifstream	file(filename.c_str());
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

	line_is.clear();
	line_is.str(date);
	std::string year;
	std::string month;
	std::string day;

	if (!std::getline(line_is, year, '-') ||
		!std::getline(line_is, month, '-') ||
		!std::getline(line_is, day, '-')) {

		std::cout << "[BAD DATE] " << date << std::endl;
		throw IncorrectDateFormatException();
	}

	size_t month_days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	size_t year_d = std::atof(year.c_str());
	size_t month_d = std::atof(month.c_str());
	size_t day_d = std::atof(day.c_str());

	if ((!year_d % 4 && year_d % 100) || !year_d % 400)
		month_days[2] = 29;

	if (month_d > 12 || month_d < 1 || day_d > month_days[month_d]) {
		std::cout << "[BAD DATE] " << date << std::endl;
		throw IncorrectDateFormatException();
	}

	if (std::atof(year.c_str()) > 2024 || std::atof(year.c_str()) < 2009 ||
		std::atof(month.c_str()) > 12 || std::atof(month.c_str()) < 1 ||
		std::atof(day.c_str()) > 31 || std::atof(day.c_str()) < 1) {

		std::cout << "[BAD DATE] " << date << std::endl;
		throw IncorrectDateFormatException();
	}

	double new_val = std::atof(value.c_str());

	if (new_val < 0) {
		// std::cout << "[TOO LOW] " << new_val << std::endl;
		throw NotPositiveException();
	}
	else if (new_val > 1000) {
		// std::cout << "[TOO BIG] " << new_val << std::endl;
		throw NumberTooBigException();
	}

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

void	BitcoinExchange::add_value( std::string line ) {
	std::istringstream	line_is(line);
	std::string			date;
	std::string			value;
	if (!std::getline(line_is, date, ' '))
		return ;
	if (!std::getline(line_is, value, ' ') || !std::getline(line_is, value, ' '))
		return ;

	double new_val = std::atof(value.c_str());
	
	try {
		this->is_correct(date, value);
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
		return ;
	}

	if (_data.find(date) == _data.end()) {
		std::cout << date << " => " << new_val << " = ";
		// std::cout << "OLD VALUE= " << ((--_data.lower_bound(date))->second) << " | ";
		std::cout << (--_data.lower_bound(date))->second * new_val << std::endl;

	}
	else {
		std::cout << date << " => " << new_val << " = ";
		std::cout << this->_data[date] * new_val << std::endl;
	
	}

}

size_t	BitcoinExchange::get_value( std::string date ) {
	if (_data.find(date) != _data.end())
		return this->_data.at(date);
	throw NoSuchKeyException();
}

void	BitcoinExchange::print_data( void ) {

	for (std::map<std::string, double>::iterator it = _data.begin(); it != _data.end(); it++) {
		std::cout << it->first << " | " << it->second << std::endl;
	}

}

bool BitcoinExchange::operator==( const BitcoinExchange& Other ) {
	if (_data == Other._data)
		return true;
	return false;
}
