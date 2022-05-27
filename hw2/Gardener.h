#pragma once
#include "Person_who_knows_what_POOP_stands_for.h"

class Gardener : public Person_who_knows_what_POOP_stands_for {
public:
	Gardener(std::string);
	FlowerBouquet* prepareBouquet(std::vector<std::string>);
};