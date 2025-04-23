#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <list>

#include "containers_utils.h"

static std::vector<int> v;
static std::list<std::string> lst_names;

int checkVectorSize()
{
	return v.size();
}

void addElementToVector(int el)
{
	if(el > 0)
	{
		v.push_back(el);
		std::cout << "New element " << el << " added to vector v ." << '\n';
	}
	else
	{
		std::cout << "Please enter a valid positive number." << '\n';
	}
}

void addNameToList(std::string name, char pos)
{
	if (pos == 'F')
	{
		lst_names.push_front(name);
	}
	else
	{
		lst_names.push_back(name);
	}
	std::cout << "Name added!" << '\n';
}

void printList()
{
	for (auto i = lst_names.begin(); i != lst_names.end(); ++i)
	{
		std::cout << *i << ' ';
	}
}
