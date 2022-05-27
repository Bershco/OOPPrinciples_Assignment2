#pragma once
#include "Person_who_knows_what_POOP_stands_for.h"
#include <vector>
#include "DeliveryPerson.h"
#include "FlowerArranger.h"
#include "Wholesaler.h"

class Florist : public Person_who_knows_what_POOP_stands_for {
private:
	Wholesaler* wholesaler;
	FlowerArranger* flowerArranger;
	DeliveryPerson* deliveryPerson;

public:
	Florist(std::string, Wholesaler*, FlowerArranger*, DeliveryPerson*);
	void acceptOrder(Person*, std::vector<std::string>);
};