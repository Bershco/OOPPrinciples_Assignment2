#pragma once
#include "Person_who_knows_what_POOP_stands_for.h"
class DeliveryPerson : public Person_who_knows_what_POOP_stands_for {
	public:
		DeliveryPerson(std::string);
		void deliver(Person*, FlowerBouquet*);
};