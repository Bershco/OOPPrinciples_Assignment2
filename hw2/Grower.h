#pragma once
#include "Gardener.h"

class Grower : public Person_who_knows_what_POOP_stands_for {
	protected:
		Gardener* gardener;
	public:
		Grower(std::string, Gardener*);
		FlowerBouquet* prepareOrder(std::vector<std::string>);
};