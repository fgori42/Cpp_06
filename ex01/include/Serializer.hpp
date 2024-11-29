#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include "Data.hpp"

struct Data;

class Serializer
{
private:
	Serializer();
	Serializer(const Serializer &org);
	Serializer &operator=(const Serializer &org);
public:
	~Serializer();
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif