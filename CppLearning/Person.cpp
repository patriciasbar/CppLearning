#include <iostream>
#include <string>
#include "Person.h"

Person::Person(const std::string& username) : name{ username } {};// user defined constructor

std::string Person::getname() const 
{
	return name;
};

Student::Student(const std::string& username, int sem) : Person::Person {username}, semester{sem} {};


int Student::getsemester() const
{ 
	return semester;
}

