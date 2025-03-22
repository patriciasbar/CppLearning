#include <iostream>
#include <string>
#include "classes_exercises.h"


Book::Book(std::string book, int total_pages) : title{ new std::string (book) }, pages{ total_pages }
	{
		std::cout << "A Book object has been created!" << '\n';
	}

Book::Book(const Book& other) : title{ new std::string(*other.title) }, pages {other.pages} //Create a new Book by copying title and pages from other.
{
	std::cout << "A copy of the Book has been created!" << '\n';
}

Book& Book::operator=(const Book& other) //This function copies the values from other into the current Book and returns itself.
{
	if (this != &other)
	{
		delete title;
		title = new std::string(*other.title);
		pages = other.pages;
	}
	std::cout << "Copy assignment operator called!" << '\n';
	return *this;
}

Book::Book (Book&& other) : title {std::move(other.title)}, pages {other.pages} //Create a new Book by stealing title from other while copying pages
{
	std::cout << "Move constructor called!" << '\n';	
	other.pages = 0;
	other.title = nullptr;
}

Book& Book::operator=(Book&& other)  //other is an rvalue reference to a Book object that I can move from.
{
	if (this != &other)
	{
		title = std::move(other.title);
		other.title = nullptr;
		pages = other.pages;

		other.pages = 0;
	}
	std::cout << "Move assignment operator called!" << '\n';
	return *this;
}


void Book::displayInfo()
{
	if (title)
	{
		std::cout << "Book: " << *title << ", # of pages: " << pages << '\n';
	}
	else
	{
		std::cout << "Book is empty, # of pages " << pages << '\n';
	}
}

Book::~Book()
{
	std::cout << "Book destroyed!" << '\n';
	delete title;
}


MyClass::MyClass(int my_int, double my_double) : x{ my_int }, y{ my_double }
{
	std::cout << "MyClass object has been created! :)" << '\n';
};

MyClass::MyClass(const MyClass& other) : x{ other.x }, y{ other.y }
{
	std::cout << "Copy constructor invoked!" << '\n';
};


MyClass::MyClass(MyClass&& other) : x{ std::move(other.x) }, y{ std::move(other.y) }
{
	std::cout << "Move constructor invoked!" << '\n';
};

void MyClass::printdata()
{
	std::cout << "Value of my_int is: " << x << " and value of my_double is : " << y << '\n';
}

MyClass MyClass::operator-=(const MyClass& other)  //Define the - operator function of class MyClass, which returns a MyClass
{
	this->x -= other.x;
	this->y -= other.y;
	return *this;
}

MyClass operator-(MyClass lhs, const MyClass& other)
{
	lhs -= other;
	return lhs;
}

;
