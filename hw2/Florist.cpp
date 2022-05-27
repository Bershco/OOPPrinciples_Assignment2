#include "Florist.h"
#include <iostream>

Florist::Florist(std::string name, Wholesaler* ws, FlowerArranger* fa, DeliveryPerson* dp)
	: Person_who_knows_what_POOP_stands_for(name,"Florist")
{
	wholesaler = ws;
	flowerArranger = fa;
	deliveryPerson = dp;
}

void Florist::acceptOrder(Person* recipient, std::vector<std::string> flowers) {
	std::cout << getName() << " forwards request to " << wholesaler->getName() << "." << std::endl;
	FlowerBouquet* bouquet = wholesaler -> acceptOrder(flowers);
	std::cout << wholesaler -> getName() << " returns flowers to " << this -> getName() << "." << std::endl;
	std::cout << getName() << " request flower arrangement from " << flowerArranger -> getName() << "." << std::endl;
	flowerArranger -> arrangeFlowers(bouquet);
	std::cout << flowerArranger->getName() << " returns arranged flowers to " << this -> getName() << "." << std::endl;
	std::cout << getName() << " forwards flowers to " << deliveryPerson->getName() << "." << std::endl;
	deliveryPerson -> deliver(recipient, bouquet);
	recipient -> acceptFlowers(bouquet);
}