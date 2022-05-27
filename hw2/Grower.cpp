#include "Grower.h"

Grower::Grower(std::string name, Gardener* gardener)
	: Person_who_knows_what_POOP_stands_for(name, "Grower")
{
	this->gardener = gardener;
}

FlowerBouquet* Grower::prepareOrder(std::vector<std::string> flowers) {
	std::cout << this->getName() << " forwards request to " << gardener->getName() << "." << std::endl;
	FlowerBouquet* bouquet = gardener->prepareBouquet(flowers);
	std::cout << gardener->getName() << " returns flowers to " << this->getName() << "." << std::endl;
	return bouquet;
}