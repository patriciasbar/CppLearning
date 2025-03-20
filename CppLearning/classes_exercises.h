#ifndef CLASSES_EXERCISES_H
#define CLASSES_EXERCISES_H

class Book
{
private:
	std::string* title;
	int pages;
public:
	Book(std::string book, int total_pages);  //default constructor

	void displayInfo();

	Book(const Book& other); // copy constructor

	Book& operator=(const Book& other); // copy assignment

	Book(Book&& other); // move operator

	Book& operator=(Book&& other); // move assignment

	~Book();  //destructor
};

class MyClass
{
private:
	int x;
	std::string* login;
public:
	MyClass(std::string username); // default constructor
	
	void printmessage();

	void setx(int myvalue);

	int getx();

	~MyClass(); // destructor
};

#endif;
