#pragma once
#include "Person_who_knows_what_POOP_stands_for.h"
#include <string>
#include <vector>
class FlowerArranger : public Person_who_knows_what_POOP_stands_for {
	public:
		FlowerArranger(std::string);
		void arrangeFlowers(FlowerBouquet*);
};