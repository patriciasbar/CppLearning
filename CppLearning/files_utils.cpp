#include <iostream>
#include <fstream>
#include <string>
#include "files_utils.h"

void readCharFromFile()
{
	try
	{
		std::ifstream fs{ "data.txt" };
		if (fs)
		{
			char c;
			while (fs >> std::noskipws >> c)
			{
				std::cout << c;
			}
		}
		else
		{
			throw (0);
		}
	}
	catch (int e)
	{
		std::cout << "Fail to open file." << '\n';
	}
}


// Exercise 2 – std::ofstream (writing to a file):
void writeToFile(std::string user_name_age)
{
	std::ofstream fs{ "output.txt", std::ios::out };
	if (fs)
	{
		fs << user_name_age << '\n';
	}
}


// Exercise 3 – std::fstream (read and write):
void readWriteToFile()
{
	// read from file
	try 
	{
		std::fstream fs{ "data.txt"};
		if (fs)
		{
			std::string s1;
			while (std::getline(fs, s1))
			{
				std::cout << s1 << '\n';
			}
			std::fstream fw{ "data.txt", std::ios::app };
			fw <<  "Amen!" << '\n';
		}
		else 
		{
			throw (0);
		}
	}
	catch (int e)
	{
		std::cout << "Fail to open file!" << '\n';
	}
}
