#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <exception>
# include <cstdlib> 

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &org);
	ScalarConverter &operator=(const ScalarConverter &org);

	//static void	printChar(std::string str);
	//static void	printInt(std::string str);
	//static void	printFloat(std::string str);
	//static void	printDouble(std::string str);
public:
	~ScalarConverter();

	//class NanValue : public std::exception
	//{
	//	public:
	//		const char *what() const throw();
	//};

	static void convert(std::string str);
};


#endif