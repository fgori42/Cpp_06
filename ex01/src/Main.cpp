#include "Data.hpp"
#include "Serializer.hpp"
# include <iostream>


int main()
{
	Data *data = new Data;

	data->data = "hello";
	data->nb = 43;

	uintptr_t	jj = Serializer::serialize(data);
	Data *dataTwo = Serializer::deserialize(jj);
	
	if (data == dataTwo)
		std::cout << "sucsess" << std::endl;
	else
		std::cout << "fail" << std::endl;
	delete data; 
}