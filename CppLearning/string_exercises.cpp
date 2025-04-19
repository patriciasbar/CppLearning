#include <iostream>
#include <string>
#include <sstream>

void printMessage()
{
	std::cout << "Hello! Have a blessed day! Don't forget to smile!" << '\n';
}

void customMessage(const std::string& customname)
{
	std::cout << "Welcome, " << customname << "!" << '\n';
}

// Group 1: One-way String Streams - Exercise 1 – std::istringstream
void readFromString()
{
	std::istringstream istr{ "John 19 29.31" };
	std::string book;
	int chapter;
	double verse;
	istr >> book >> chapter >> verse;
	std::cout << "Book of " << book << ". chapter: " << chapter << ", verses: " << verse << ". Amen!" << '\n';
}

// Exercise 2 – std::ostringstream
void writeToString(std::string name, int age)
{
	std::ostringstream ostr; 
	ostr << "Name: " << name << " - Age: " << age << '\n';
	std::cout << ostr.str();
}

// Group 2: Two-way String Stream - Exercise 3 – std::stringstream
void readStrCalcSum(std::string nums)
{
	std::stringstream ss{ nums };
	int num1;
	int num2;
	int num3;
	ss >> num1 >> num2 >> num3;
	std::cout << "Sum of " << ss.str() << " is: " << num1 + num2 + num3 << '\n';
}