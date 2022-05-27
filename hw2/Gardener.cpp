#include "Gardener.h"

FlowerBouquet* Gardener::prepareBouquet(std::vector<std::string> flowers) {
	std::cout << this->getName() << " prepares flowers." << std::endl;
	FlowerBouquet *bouquet = new FlowerBouquet(flowers);
	return bouquet;
}

Gardener::Gardener(std::string name)
	: Person_who_knows_what_POOP_stands_for(name, "Gardener")
{}
