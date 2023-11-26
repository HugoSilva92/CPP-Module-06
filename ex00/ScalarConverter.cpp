#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){

}

ScalarConverter::ScalarConverter(ScalarConverter const &other){
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const &other){
	if (this != &other){
		return *this;
	}
	return *this;
}

ScalarConverter::~ScalarConverter(){

}

bool	ScalarConverter::isChar(std::string const &str){
	if (str.length() == 1 && !isdigit(str[0]) && str[0] > 32 && str[0] < 127){
		return true;
	}
	return false;
}

bool	ScalarConverter::isInt(std::string const &str){
	for (int i = 0; i < str.length(); i++){
		if (str[0] == '-' || str[0] == '+'){
			i++;
		}																//testar colocar so o - ou + sem numero
		if (!isdigit(str[i])){
			return false;
		}
	}
	return true;
}

bool	ScalarConverter::isFloat(std::string const &str){
	if (str[str.length()] != 'f' || str[str.length()] == '.'){
		return false;
	}
}

bool	ScalarConverter::isDouble(std::string const &str){

}

bool	ScalarConverter::isSpecial(std::string const &str){

}

bool	ScalarConverter::overflow(std::string const &str, char type){

}

void	ScalarConverter::toChar(std::string const &str){

}

void	ScalarConverter::toInt(std::string const &str){

}

void	ScalarConverter::toFloat(std::string const &str){

}

void	ScalarConverter::toDouble(std::string const &str){

}

void	ScalarConverter::convert(std::string const &str){

}
