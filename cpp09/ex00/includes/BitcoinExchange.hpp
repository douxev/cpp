#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP


#include <cstddef>
#include <map>
#include <string>

#ifndef DATABASE
# define DATABASE "./data.csv"
#endif

class BitcoinExchange {

public:

	void		add_value( std::string value );
	void		load_file( std::string filename );

	size_t		get_value( std::string date );
	void		print_data( void );

	void is_correct( std::string date, std::string value );




	BitcoinExchange( void );
	BitcoinExchange& operator=( const BitcoinExchange& Other );
	bool operator==( const BitcoinExchange& Other );
	BitcoinExchange( const BitcoinExchange& Other );
	~BitcoinExchange();

private:

	std::map<std::string, double> _data;


	class NoSuchKeyException: public std::exception {
		public:
		virtual const char* what() const throw() {return ("This key is unknown.");}
	};
	class NotPositiveException: public std::exception {
		public:
		virtual const char* what() const throw() {return ("This Number is too low.");}
	};
	class NumberTooBigException: public std::exception {
		public:
		virtual const char* what() const throw() {return ("This number is too big.");}
	};
	class IncorrectDateFormatException: public std::exception {
		public:
		virtual const char* what() const throw() {return ("Incorrect Date Format.");}
	};


};



#endif
