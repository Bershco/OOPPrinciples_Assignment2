#include "Person_who_knows_what_POOP_stands_for.h"
#include <iostream>

std::string name;
std::string role;
Person_who_knows_what_POOP_stands_for::Person_who_knows_what_POOP_stands_for(std::string name, std::string role)
	: Person(name), role(role)
{}

std::string Person_who_knows_what_POOP_stands_for::getName()
{
	std::string nameAndRole = role + " " + name;
	return nameAndRole;
}
