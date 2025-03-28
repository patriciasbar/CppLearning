#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
private:
	std::string name;

public:
	explicit Person(const std::string& username); // user defined constructor

	std::string getname() const;
};


class Student : public Person   //derived class
{
private:
	int semester;

public:
	Student(const std::string& username, int sem); //user defined constructor

	int getsemester() const;
};  




#endif