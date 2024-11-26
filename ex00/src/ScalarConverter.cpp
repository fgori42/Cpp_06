#include "ScalarConverter.hpp" 

ScalarConverter::ScalarConverter()
{
	std::cout << "constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &org)
{
	(void)org;
	std::cout << "clone constructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &org)
{
	(void)org;
	std::cout << "operator called" << std::endl;
	return (*this);
}

static bool isChar(std::string str)
{
	if(str.empty())
		return (false);
	if (str.length() == 1 && (std::isprint(str[0]) && !(std::isdigit(str[0]))))
		return(true);
	else
		return(false);
}

static bool	isInt(std::string str)
{
	if(str.empty())
		return (false);
	for (size_t i = 0; i < str.length(); i++)
		if(!std::isdigit(str[i]))
			return(false);
	return(true);
}

static bool	isFloat(std::string str)
{
	if(str.empty())
		return (false);
	size_t dot = str.find(".");
	size_t fPos = str.find("f");
	if (dot == std::string::npos || fPos == std::string::npos)
		return (false);
	if (fPos == str.length() - 1 &&  dot != 0 && dot != fPos - 1)
		return (true);
	else
		return (false);
}

static bool	isDouble(std::string str)
{
	if(str.empty())
		return (false);
	size_t dot = str.find(".");
	size_t fPos = str.find("f");
	if (dot == std::string::npos || fPos != std::string::npos)
		return (false);
	if (dot != 0 && dot != str.length() - 1)
		return (true);
	else
		return (false);
}

static int checkType(std::string str)
{
	if (isChar(str))
		return (1);
	else if (isInt(str))
		return (2);
	else if (isFloat(str))
		return (3);
	else if (isDouble(str))
		return (4);
	else
		return (0);
}

static void printChar(std::string str)
{
	std::cout << "char : '" << str << "'" << std::endl;
	std::cout << "int : " << static_cast<int>(str[0]) << std::endl;
	std::cout << "float : " << static_cast<float>(str[0]) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(str[0]) << ".0" << std::endl;
}

//static void printInt(std::string str)
//{
//	if 	
//}

void ScalarConverter::convert(std::string str)
{
	int	i = checkType(str);
	switch (i)
	{
		case 0:
			std::cout<< "ass";
			break;
		case 1:
			printChar(str);
			break;
		case 2:
			//printInt(str);
			std::cout<< "a";
			break;
		case 3:
			//printFloat(str);
			std::cout<< "a";
			break;
		case 4:
			//printDouble(str);
			std::cout << "double" << std::endl;
			break;
	}
}
