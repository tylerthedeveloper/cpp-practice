
#include "Person.h"
#include <iostream>

Person::Person(std::string first, std::string last, int arbitrary) :
			firstName(first), lastName(last), arbitraryNumber(arbitrary)
{
	std::cout << "Constructing: " << firstName << " "
	<< lastName << std::endl;	
}	

Person::~Person()
{
	std::cout << "Deconstructing: " << firstName << " "
	<< lastName << std::endl;
}
