#pragma once
#include <string>
#include <vector>
class FlowerBouquet {
private:
	std::vector<std::string> bouquet;
	bool isArranged;

public:
	FlowerBouquet(std::vector<std::string>);
	void arrange();
	std::string getBouquet();
};