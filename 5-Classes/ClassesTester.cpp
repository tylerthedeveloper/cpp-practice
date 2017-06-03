#include <iostream>
#include "Person.h"
#include "Tweeter.h"
#include "status.h"

int main() 
{
	Person p1("ttt", "ggg", 123);
	{
		Tweeter t1("zz", "ypo", 456, "@someone");
		//std::cout << p2.getFirstName() << std::endl;
	}
	std::cout << "after inner constructor" << std::endl;
	Status s = Pending;
	return 0;
}
