#include <iostream>
#include <string>
#include "classes_exercises.h"


Book::Book(std::string book, int total_pages) : title{ book }, pages{ total_pages }
	{
		std::cout << "A Book object has been created!" << '\n';
	}

Book::Book(const Book& other) : title{ other.title }, pages {other.pages}
{
	std::cout << "A copy of the Book has been created!" << '\n';
}

Book& Book::operator=(const Book& other)
{
	if (this != &other)
	{
		title = other.title;
		pages = other.pages;
	}
	std::cout << "Copy assignment operator called!" << '\n';
	return *this;
}


void Book::displayInfo()
{
	std::cout << "Book: " << title << ", # of pages: " << pages << '\n';
};