
#include "Tweeter.h"
#include <iostream>

Tweeter::Tweeter(std::string first, 
				 std::string last, 
				 int arbitrary,
				 std::string handle) :
					Person(first, last, arbitrary),
					twitterhandle(handle)
{
	std::cout << "Constructing: tweeter" << std::endl;	
}	

Tweeter::~Tweeter()
{
	std::cout << "Deconstructing: tweeter" << std::endl;
}
