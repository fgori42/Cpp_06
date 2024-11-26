#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "insert only one arguments" << std::endl;
		exit(1);
	}
	try
	{
		ScalarConverter::convert(std::string (av[1]));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}