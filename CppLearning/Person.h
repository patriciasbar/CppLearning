#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
private:
	std::string name;

public:
	Person(std::string username); // user defined constructor

	std::string getname();
};


class Student : public Person   //derived class
{


};  




#endif