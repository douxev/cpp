#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP


#include <cstddef>
#include <map>
#include <string>

class BitcoinExchange {

public:

	void	add_value( std::string value );
	size_t	get_value( std::string date ) const;
	void	print_data( void );


	BitcoinExchange( void );
	BitcoinExchange& operator=( const BitcoinExchange& Other );
	BitcoinExchange( const BitcoinExchange& Other );
	~BitcoinExchange();

private:

	std::map<std::string, size_t> _data;


	class NoSuchKeyException: public std::exception {
		public:
		virtual const char* what() const throw() {return ("NoSuchKeyException");}
	};
	class NotPositiveException: public std::exception {
		public:
		virtual const char* what() const throw() {return ("NotPositiveException");}
	};
	class NumberTooBigException: public std::exception {
		public:
		virtual const char* what() const throw() {return ("NumberTooBigException");}
	};
	class IncorrectDateFormatException: public std::exception {
		public:
		virtual const char* what() const throw() {return ("IncorrectDateFormatException");}
	};


};



#endif
