#include "Wholesaler.h"
#include <iostream>

Wholesaler::Wholesaler(std::string name, Grower* gw)
	: Person_who_knows_what_POOP_stands_for(name,"Wholesaler")
{
	this->grower = gw;
}

FlowerBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers) {
	std::cout << this -> getName() << " forwards request to " << grower -> getName() << "." << std::endl;
	FlowerBouquet* bouquet = grower -> prepareOrder(flowers);
	std::cout << grower -> getName() << " returns flowers to " << this -> getName() << "." << std::endl;
	return bouquet;
}