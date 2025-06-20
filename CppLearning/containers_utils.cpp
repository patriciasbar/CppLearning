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
#include<algorithm>
#include<functional>
#include<unordered_map>
#include<tuple>

#include "containers_utils.h"

static std::vector<int> v;
static std::vector<int> lst = { 45, 67, 90, -10, -1, 87 };
static std::vector<int> v_from = { 0, 2, 4, 6, 8, 10, 12 };
static std::vector<int> v_to(3);
static std::vector<std::string> vector_strings;
static std::list<std::string> lst_names;
static std::forward_list<std::string> todo_tasks = { "Read topic", "Review topic", "Practice topic" };
static std::deque<std::string> queue = { "Mark", "James", "Peter" };
static std::array<std::string, 7> daysOfWeek = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
static std::map<std::string, int> map_user;
static std::pair<std::string, int> pair_user_age;
static std::set<int> lst_numbers;
static std::set<std::string> lst_unique_cities;
static std::vector<int> v_nums;
static std::unordered_map<std::string, float> products;
const std::tuple<std::string, long, double> country = { "Brasil", 212770794, 8.51 };
using UserMap = std::unordered_map<std::string, int>;
UserMap mymap;


int checkVectorSize()
{
	return v.size();
}

void addElementToVector(int el)
{
	if(el > 0)
	{
		v.push_back(el);
		std::cout << "New element " << el << " added to vector ." << '\n';
	}
	else
	{
		std::cout << "Please enter a valid positive number." << '\n';
	}
}

void displayVectorElements()
{
	std::cout << "Vector values: ";
	for (auto el : v)
	{
		std::cout << el << " ";
	}
}


void copyVectorElements()
{
	std::copy(v_from.begin(), v_from.begin()+3, v_to.begin());
	for (auto el : v_to)
	{
		std::cout << el << " ";
	}
}

void maxElement()
{
	auto max = std::max_element(v_from.begin(), v_from.end());
	std::cout << "Max element of vector is: " << *max << '\n';

}

void minElement()
{
	auto min = std::min_element(v_from.begin(), v_from.end());
	std::cout << "Min element of vector is: " << *min << '\n';
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
	for (const auto& el : daysOfWeek)
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


//vector_strings
void addStrToVector(std::string val_str)
{
	vector_strings.push_back(val_str);
	std::cout << "Added to the vector! " << '\n';
}
	
void displayStrVectors()
{
	for (const auto& el : vector_strings)
	{
		std::cout << el << '\n';
	}
}

void eraseStrVectorElement()
{
	auto it = vector_strings.begin();  // first element pos
	vector_strings.erase(it);
	std::cout << "First element in vector deleted!" << '\n';
}


void findStrVector(std::string val)
{
	auto it = std::find(vector_strings.begin(), vector_strings.end(), val);
	if (it != vector_strings.end())
	{
		std::cout << "There is a match: " << *it << '\n';
	}
	else 
	{
		std::cout << "No match found!" << '\n';
	}
}


//list of unique cities
void addCityNames(std::string city)
{
	lst_unique_cities.insert(city);
	std::cout << "City added!" << '\n';
}

void displayCities()
{
	for (auto i = lst_unique_cities.begin(); i != lst_unique_cities.end(); i++)
	{
		std::cout << *i << " ";
	}
}

void sortNumbersAsc()
{
	std::sort(lst.begin(), lst.end());
	std::cout << "Sorted list in Ascending order: ";
	for (auto el : lst)
	{
		std::cout << el << " ";
	}
}


void sortNumbersDesc()
{
	std::sort(lst.begin(), lst.end(), std::greater<int>());
	std::cout << "Sorted list in Descending order: ";
	for (auto el : lst)
	{
		std::cout << el << " ";
	}
}


void addNumtoVector()
{
	for (int n = 1; n < 11; ++n)
	{
		v_nums.push_back(n);
	}
	std::cout << "Elements added to the vector!" << '\n';
}


void displayVectorElems()
{
	for (auto el : v_nums)
	{
		std::cout << el << " ";
	}
	std::cout << '\n';
}


void eraseVectorElems()
{
	v_nums.erase(v_nums.begin(), v_nums.begin()+3);
	std::cout << "Elements deleted!" << '\n';
}


void findVectorElem(int n)
{
	auto it = std::find(std::begin(v_nums), std::end(v_nums), n);
	if (it != std::end(v_nums))
	{
		std::cout << "Item " << *it << " found!" << '\n';
	}
	else
	{
		std::cout << "Match not found!" << '\n';
	}
}


void addElemsToSet(int el)
{
	lst_numbers.insert(el);
	std::cout << "Element is added!" << '\n';
}


void displaySetElements()
{
	for (auto el : lst_numbers)
	{
		std::cout << el << " ";
	}
	std::cout << '\n';
}


void eraseSetElems(int el)
{
	auto it = lst_numbers.find(el);
	if (it != lst_numbers.end())
	{
		lst_numbers.erase(it);
		std::cout << "Element erased!" << '\n';
	}
	else
	{
		std::cout << "Element does not exist!" << '\n';
	}
}


void setDetails()
{
	auto size = lst_numbers.size();
	if (size > 0)
	{
		std::cout << "Size: " << lst_numbers.size() << '\n';
		lst_numbers.clear();
		std::cout << "Set cleared!" << '\n';
		std::cout << "Size: " << lst_numbers.size() << '\n';
	}
	else
	{
		std::cout << "Set is empty!" << '\n';
	}
}

void addProducts(std::string prodName, float price)
{
	if (!prodName.empty())
	{
		products[prodName] = price;
		std::cout << "Product added!" << '\n';
	}
	else
	{
		std::cout << "Please inform a product name!";
	}
}


void displayProducts()
{
	if (products.size() > 0)
	{
		for (const auto& pair : products)
		{
			std::cout << pair.first << " => " << pair.second << '\n';
		}
	}
}


void updatePrice(std::string prod, float new_price)
{
	auto found_it = products.find(prod);
	if (found_it != products.end())
	{
		products[prod] = new_price;
		std::cout << "Price updated!" << '\n';	}


}


void displayCountryDetails()
{
	std::cout << "The population of " << std::get<0>(country) <<
		" is estimated to be (as of 2025) " << std::get<1>(country) <<
		" and its total area(KM2) is " << std::get<2>(country) << "!" << '\n';
}



void addUserMap(std::string username, int userage)
{
	if (!username.empty() && userage > -1)
	{
		mymap[username] = { userage };
		std::cout << "User/age added!" << '\n';
	}
	else
	{
		std::cout << "Inform a valid username or age!" << '\n';
	}
};


void displayUserMap()
{
	for (auto el : mymap)
	{
		std::cout << "User: " << el.first << " , " << "Age: " << el.second << '\n';
	}
}
