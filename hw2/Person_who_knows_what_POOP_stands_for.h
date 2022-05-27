#pragma once
#include <string>
#include "Person.h"

class Person_who_knows_what_POOP_stands_for : public Person{
	protected:
		std::string role;
	public:
		Person_who_knows_what_POOP_stands_for(std::string, std::string);
		std::string getName();
};