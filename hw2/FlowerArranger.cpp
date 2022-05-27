#include "FlowerArranger.h"

FlowerArranger::FlowerArranger(std::string name)
	: Person_who_knows_what_POOP_stands_for(name,"Flower Arranger")
{}

void FlowerArranger::arrangeFlowers(FlowerBouquet* flowers)
{
	std::cout << getName() << " arranges flowers." << std::endl;
	flowers -> arrange();
}
