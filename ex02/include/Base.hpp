#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class Base
{
private:

public:
	virtual ~Base();
	Base * generate(void);
	void identify(Base* p);
	void identify(Base& p);
};

Base::~Base()
{
}

Base * Base::generate(void)
{
	std::srand(std::time(0));

	int i = rand() % 3;
	switch (i)
	{
	case 0:
		std::cout <<"  A   " <<std::endl;
		return new A;
	case 1:
		std::cout <<"  B   " <<std::endl;
		return new B;
	case 2:
		std::cout <<"  C   " <<std::endl;
		return new C;
	}

}

void Base::identify(Base* p)
{
	
}

void Base::identify(Base& p)
{

}

#endif