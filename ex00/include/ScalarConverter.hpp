#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <sstream>
# include <exception>
# include <limits>
# include <limits.h>
# include <cstdlib> 

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &org);
	ScalarConverter &operator=(const ScalarConverter &org);

public:
	~ScalarConverter();

	static void convert(std::string str);
};


#endif