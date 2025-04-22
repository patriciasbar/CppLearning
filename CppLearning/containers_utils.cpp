#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "containers_utils.h"

static std::vector<int> v = { 8, 6, 4, 2, 0 };

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
