#pragma once
#include <string>

using namespace std;

typedef struct City
{
	string name;
	int population;
	bool isCapital;
	struct City* next;

}City;
enum Continent
{
	Eurasia, Africa, NorthAmerica, SouthAmerica, Australia, Antarctic
};
class Country
{
private:
	string name;
	Continent continent;
	City* capital;
	City* head;
public:
	Country(string name, Continent continent)
	{
		this->name = name;
		head = nullptr;
		capital = nullptr;
		this->continent = continent;
	};
	bool isEmpty() { return head == nullptr; };
	City* add(string name, int population, bool isCapital, City* node = nullptr)
	{

		City* elem = new City();
		elem->name = name;
		elem->population = population;
		elem->isCapital = isCapital;
		// check if a city is capital
		if (elem->isCapital == true) 
		{
			capital = elem;
		}
		if (node == nullptr) // Add a new control
		{
			if (head == nullptr) {
				elem->next = nullptr;
				head = elem;
			}
			else {
				elem->next = head;
				head = elem;
			}
			return elem;
		}
		elem->next = node->next; // Add a node after the current one
		node->next = elem;

		return elem;
	}

	string getName(City* p) { return p->name; }
	int getPopulation(City* p) { return p->population; }

	string getName() { return name; }
	Continent getContinent() { return continent; }
	City* getCapital() { return capital; }
	City* getHead() { return head; }
};
