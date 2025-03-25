#include <iostream>
#include <string>
#include "Person.h"

Person::Person(std::string username) : name{ username } {};// user defined constructor

std::string Person::getname()
{
	return name;
}
