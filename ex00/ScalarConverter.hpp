#pragma once

#include <iostream>

// https://www.geeksforgeeks.org/static_cast-in-cpp/ static cast explained

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &other);
		ScalarConverter &operator=(ScalarConverter const &other);
		~ScalarConverter();

		bool	isChar(std::string const &str);
		bool	isInt(std::string const &str);
		bool	isFloat(std::string const &str);
		bool	isDouble(std::string const &str);
		bool	isSpecial(std::string const &str);
		bool	overflow(std::string const &str, char type);

		void	toChar(std::string const &str);
		void	toInt(std::string const &str);
		void	toFloat(std::string const &str);
		void	toDouble(std::string const &str);

	public:
		static void convert(std::string const &str);
};
