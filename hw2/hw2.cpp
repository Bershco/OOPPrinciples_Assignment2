// hw2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include "Person.h"
#include "Wholesaler.h"
#include "DeliveryPerson.h"
#include "FlowerArranger.h"
#include "Florist.h"
#include "Gardener.h"

int main(int argc, char *argv[])
{
    Person* Chris = new Person("Chris");
    Person* Robin = new Person("Robin");
    Gardener* Garett = new Gardener("Garett");
    Grower* Gray = new Grower("Gray", Garett);
    Wholesaler* Watson = new Wholesaler("Watson", Gray);
    DeliveryPerson* Dylan = new DeliveryPerson("Dylan");
    FlowerArranger* Flora = new FlowerArranger("Flora");
    Florist* Fred = new Florist("Fred", Watson, Flora, Dylan);
    std::vector<std::string> flowers = { "Roses","Violets","Gladiolus" };
    Chris->orderFlowers(Fred, Robin, flowers);

    delete Chris, Robin, Garett, Gray, Watson, Dylan, Flora, Fred;
}