#pragma once
#include "person.h"
#include <string>

class Tweeter : public Person
{
	private:
		std::string twitterhandle;

	public:
		Tweeter(std::string first, std::string last,
			int num, std::string handle);
		~Tweeter(void);

};
