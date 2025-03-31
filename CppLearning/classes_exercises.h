#ifndef CLASSES_EXERCISES_H
#define CLASSES_EXERCISES_H

class Book
{
private:
	std::string* title;
	int pages;
public:
	Book(std::string book, int total_pages);  //user provided constructor

	void displayInfo();

	Book(const Book& other); // user defined copy constructor

	Book& operator=(const Book& other); // user defined copy assignment

	Book(Book&& other); // user defined move operator

	Book& operator=(Book&& other); // user defined move assignment

	~Book();  //destructor
};

class MyClass
{
private:
	int x;
	double y;
public:
	MyClass(int my_int, double my_double); //user provided constructor
	
	MyClass(const MyClass& other); //user defined copy constructor

	MyClass(MyClass&& other); //user defined move constructor

	MyClass operator-=(const MyClass& other); //operator- overload
	
	friend MyClass operator-(MyClass lhs, const MyClass& other);
	
	void printdata();

};

template <typename T, typename U>
auto compareValues(T val1, U val2) {
	return (val1 > val2) ? val1 : val2;
}

class Device
{
public:
	static int deviceCount;
	double storageGB;
	static void displayDeviceCount();
	static void incrementCount();
	virtual void displayinfo();
	Device(double val_storage); //user defined constructor.

};

class Laptop : public Device {
public:
	void displayinfo() override;
	Laptop(double val_storage);
};

class Smartphone : public Device {
public:
	void displayinfo() override;
	Smartphone(double val_storage);

};


#endif;
 