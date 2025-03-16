#ifndef CLASSES_EXERCISES_H
#define CLASSES_EXERCISES_H

class Book
{
private:
	std::string title;
	int pages;
public:
	Book(std::string book, int total_pages);  //default constructor

	void displayInfo();

	Book(const Book& other); // copy constructor

	Book& operator=(const Book& other); // copy assignment
};

#endif;
