#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <list>
#include<forward_list>
#include<deque>
#include<array>
#include<set>
#include<map>
#include<utility>

#include "containers_utils.h"

static std::vector<int> v;
static std::list<std::string> lst_names;
static std::forward_list<std::string> todo_tasks = { "Read topic", "Review topic", "Practice topic" };
static std::deque<std::string> queue = { "Mark", "James", "Peter" };
static std::array<std::string, 7> daysOfWeek = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
static std::set<int> lst_numbers;
static std::map<std::string, int> map_user;
static std::pair<std::string, int> pair_user_age;


int checkVectorSize()
{
	return v.size();
}

void addElementToVector(int el)
{
	if(el > 0)
	{
		v.push_back(el);
		std::cout << "New element " << el << " added to vector v ." << '\n';
	}
	else
	{
		std::cout << "Please enter a valid positive number." << '\n';
	}
}

void addNameToList(std::string name, char pos)
{
	if (pos == 'F')
	{
		lst_names.push_front(name);
	}
	else
	{
		lst_names.push_back(name);
	}
	std::cout << "Name added!" << '\n';
}

void printList()
{
	for (auto i = lst_names.begin(); i != lst_names.end(); ++i)
	{
		std::cout << *i << ' ';
	}
}


void printTodoList()
{
	for (auto i = todo_tasks.begin(); i != todo_tasks.end(); i++)
	{
		std::cout << *i << "; ";
	}
}


void addToQueue(std::string user, char pos)
{
	if (pos=='F')
	{
		queue.push_front(user);
	}
	else
	{
		queue.push_back(user);
	}
}

void removeFromQueue(char pos)
{
	if (pos == 'F')
	{
		queue.pop_front();
	}
	else
	{
		queue.pop_back();
	}
}

void displayQueue()
{
	for (auto i = queue.begin(); i != queue.end(); i++)
	{
		std::cout << *i << " ";
	}
}

void firstFiveDaysOfWeek()
{
	for (auto el : daysOfWeek)
	{
		std::cout << el << '\n';
	}
}

void addToListNumbers(int n)
{
	lst_numbers.insert(n);
}

void displayListNumbers()
{
	for (int num : lst_numbers)
	{
		std::cout << num << " ";
	}
}

void addUserDetails(std::string name, int age)
{
	map_user[name] = { age };
	std::cout << "User name and age added!" << '\n';
}

void displayDetails()
{
	for (auto el : map_user)
	{
		std::cout <<  el.first << ", " << el.second << '\n';
	}
}

void findUserDetails(std::string user)
{
	auto it = map_user.find(user);
	if (it != map_user.end())
	{
		std::cout << "User: " << it->first << " age: " << it->second << '\n';
	}

}

void addUserPairDetails(std::string name, int age)
{
	pair_user_age = std::make_pair(name, age);
	map_user[pair_user_age.first] = pair_user_age.second;
	std::cout << "User name and age added!" << '\n';
}

