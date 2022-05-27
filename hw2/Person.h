#pragma once
#include <vector>
#include <iostream>
#include "FlowerBouquet.h"

class Florist;

class Person {
protected:
	std::string name;
public:
	Person(std::string);
	void orderFlowers(Florist*, Person*, std::vector<std::string>);
	void acceptFlowers(FlowerBouquet*);
	virtual std::string getName();
};