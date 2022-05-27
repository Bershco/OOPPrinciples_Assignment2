#pragma once
#include "Person_who_knows_what_POOP_stands_for.h"
#include <vector>
#include "Grower.h"

class Wholesaler : public Person_who_knows_what_POOP_stands_for {
	private:
		Grower* grower;
	public:
		Wholesaler(std::string, Grower*);
		FlowerBouquet* acceptOrder(std::vector<std::string>);
};