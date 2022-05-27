#include "FlowerBouquet.h"

void FlowerBouquet::arrange() {
	FlowerBouquet::isArranged = true;
}

std::string FlowerBouquet::getBouquet()
{
	std::string flowers = "";
	for (int i = 0; i < bouquet.size() - 1; i++) {
		flowers = flowers + bouquet[i] + ", ";
	}
	flowers = flowers + bouquet[bouquet.size() - 1];
	return flowers;

}

FlowerBouquet::FlowerBouquet(std::vector<std::string> bouquet)
{
	this->bouquet = bouquet;
	isArranged = false;
}
