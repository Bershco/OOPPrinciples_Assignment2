#include "Person.h"
#include "Florist.h"

Person::Person(std::string name) : name(name)
{}

void Person::orderFlowers(Florist* florist, Person* recipient, std::vector<std::string> flowers) {
	std::cout << this -> name << " orders flowers to " << recipient -> name << " from "
		<< florist -> getName() << ": ";
	std::string flowerString = "";
	for (int i = 0; i < flowers.size()-1; i++) {
		flowerString = flowerString + flowers[i] + ", ";
	}
	flowerString = flowerString + flowers[flowers.size()-1];
	std::cout << flowerString;
	std::cout << "." << std::endl;

	florist -> acceptOrder(recipient, flowers);
}

void Person::acceptFlowers(FlowerBouquet* flowers) {
	std::cout << getName() << " accepts the flowers: " << flowers->getBouquet() << "." << std::endl;
}

std::string Person::getName()
{
	return name;
}
