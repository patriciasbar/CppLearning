#ifndef CONTAINERS_UTILS_H
#define CONTAINERS_UTILS_H

int checkVectorSize();
void addElementToVector(int el);
void displayVectorElements();
void addStrToVector(std::string val_str);
void displayStrVectors();
void eraseStrVectorElement();
void findStrVector(std::string val);
void copyVectorElements();
void maxElement();
void minElement();
void addCityNames(std::string city);
void displayCities();
void addNameToList(std::string name, char pos);
void printList();
void printTodoList();
void addToQueue(std::string user, char pos);
void removeFromQueue(char pos);
void displayQueue();
void firstFiveDaysOfWeek();
void addToListNumbers(int n);
void displayListNumbers();
void addUserDetails(std::string name, int age);
void displayDetails();
void findUserDetails(std::string user);
void addUserPairDetails(std::string name, int age);
void sortNumbersAsc();
void sortNumbersDesc();

void addNumtoVector();
void displayVectorElems();
void eraseVectorElems();
void findVectorElem(int n);
void addElemsToSet(int el);
void displaySetElements();
void eraseSetElems(int el);
void setDetails();

void addProducts(std::string prodName, float price);
void displayProducts();
void updatePrice(std::string prod, float new_price);
void displayCountryDetails();

void addUserMap(std::string username, int userage);
void displayUserMap();


constexpr bool isEven(int x) {
	return x % 2 == 0;
};


#endif

