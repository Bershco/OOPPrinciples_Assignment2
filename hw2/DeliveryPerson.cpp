#include "DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name)
	: Person_who_knows_what_POOP_stands_for(name,"Delivery Person")
{}

void DeliveryPerson::deliver(Person* recipient, FlowerBouquet* flowers)
{
	std::cout << this -> getName() << " delivers flowers " << recipient->getName() << "." << std::endl;
}
