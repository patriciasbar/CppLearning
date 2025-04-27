#include <iostream>
#include<fstream>
#include <sstream>
#include<memory>
#include <direct.h>  
#include "calc_utils.h"
#include "string_exercises.h"
#include "initialLearning.h"
#include "classes_exercises.h"
#include "Person.h"
#include "files_utils.h"
#include "containers_utils.h"

int main()
{
    int option;
    std::cout << "Menu: \n "
        << " 0 - initialLearning \n "
        << " 1 - printMessage \n "
        << " 2 - customMessage \n "
        << " 3 - multiplication \n "
        << " 4 - loginChecker \n "
        << " 5 - division \n "
        << " 6 - Classes exercises \n "
        << " 7 - files \n "
        << " 8 - strings \n "
        << " 9 - containers \n ";
    std::cout << "Enter an option... ";
    std::cin >> option;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    switch (option)
    {
    case 0:
    {
        initialLearning();
        break;
    }
    case 1:
        printMessage();
        break;
    case 2:
    {
        std::string mynickname = "Stardust";
        customMessage(mynickname);
        break;
    }
    case 3:
    {
        int my_result = multiplication(2, 4);
        std::cout << "The result is: " << my_result;
        break;
    }
    case 4: 
        //loginChecker();
        break;
    case 5:
        std::cout << "Int division results: " << division(10, 5) << '\n';
        std::cout << "Double division results: " << division(12.5, 2.0) << '\n';
        break;
    case 6:
    {
        /*int counter;
        for (int i = 0; i < 10; ++i) {
            counter = myFunction();
        }
        std::cout << "Function was called: " << counter << '\n';

        TypeClass<int> mytype(24);
        std::cout << "My val is: " << mytype.getVal() << '\n';
        mytype.setVal(12);
        std::cout << "My val is: " << mytype.getVal() << '\n';

        TypeClass<std::string> mytype2("Peter");
        std::cout << "My val is: " << mytype2.getVal() << '\n';
        mytype2.setVal("Moses");
        std::cout << "My val is: " << mytype2.getVal() << '\n';

        std::cout << "Day of the week: " << checkDayOfWeek(daysOfWeek::Friday) << '\n';

        std::cout << "Fruit of the day! " << displayFruits(fruits::Orange) << '\n';

        using namespace Calculator::CalcInt;
        std::cout << "2 + 2 is equal to: " << sumNums(2, 2) << '\n';

        std::cout << "44 / 2 is equal to: " << Calculator::CalcInt::divNums(44, 2) << '\n';*/

        /*double d1 = 2.42;
        std::cout << "My int is " << d1 << " and my double is " << myConversion(d1) << '\n';*/

        /*int age1 = 17;
        checkAge(age1) << '\n';

        std::string password = "peace";
        std::cout << checkPassword(password);*/

        /*double result = convertInttoDouble(37);
        std::cout << result << '\n';*/

         /*Smart Pointers  - unique pointer*/
        /*std::cout << "Value p points to is: " << *p << '\n'; */


        /*unique pointer to an object of a call
        std::unique_ptr<Device> obj1 = std::make_unique<Laptop>(13);
        obj1->displayDeviceCount();
        obj1->displayinfo();*/

        /*shared pointers exercises
        std::shared_ptr<int> int1 = std::make_shared<int> (246);
        std::shared_ptr<int> int2 = int1;
        std::shared_ptr<int> int3 = int1;
        std::cout << "Pointers int1, int2 and int3 points to value: " << *int1 << " " << *int2 << " "  << *int3 << '\n';*/

        /*Simple Polymorphism
        std::unique_ptr<Smile> a1 = std::make_unique<Happy>();
        a1->positiveWords();*/

        /*Simple Polymorphism II */
        /*std::unique_ptr<Country> c1 = std::make_unique<Brazil>();
        std::unique_ptr<Country> c2 = std::make_unique<Spain>();
        c1->motherTongue();
        c2->motherTongue();

        evenOrOdd(15);
        evenOrOdd(-15);
        evenOrOdd(3.5);*/
        break;
    }
    case 7:
    {
        // readCharFromFile();
        /*std::cout << "Enter your name and age and press enter." << '\n';
        std::string user_nm_age;
        std::getline(std::cin, user_nm_age);
        std::cout << "You typed: " << user_nm_age << '\n';
        writeToFile(user_nm_age);*/
        readWriteToFile();
        readCharFromFile();
        break;
    }
    case 8:
    {
        readFromString();
        std::string name = "Tutu";
        int age = 100;
        writeToString(name, age);
        std::string numbers = "5 10 15";
        readStrCalcSum(numbers);
        break;
    }
    case 9:
    {
        /*std::cout << "Current vector size: " << checkVectorSize() << '\n';
        int i = 0;
        while (i < 5) 
        {
            std::cout << "Please inform 5 positive integer numbers and press enter..." << '\n';
            int value;
            std::cin >> value;
            addElementToVector(value);
            i++;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        checkVectorSize();
        displayVectorElements();
        
        int i2 = 0;
        while (i2 < 3)
        {
            std::cout << "Enter a name and press enter..." << '\n';
            std::string name;
            std::getline(std::cin, name);
            addNameToList(name, 'E');
            i2++;
        }
        printList();
        printTodoList();
        displayQueue();
        std::cout << '\n';
        std::string usr = "Lucas";
        addToQueue(usr, 'F');
        std::string usr2 = "Zizi";
        addToQueue(usr2, 'B');
        removeFromQueue('F');
        displayQueue();
        firstFiveDaysOfWeek();
        for (int i = 0; i < 9; ++i)
        {
            std::cout << "Enter a number between 0 - 100 and press enter: .." ;
            int n;
            std::cin >> n;
            addToListNumbers(n);
        }       
        displayListNumbers();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        for (int i = 1; i <= 3; ++i)
        {
            std::cout << "Enter user name.." ;
            std::string nm;
            std::getline(std::cin, nm);
            std::cout << "Enter user age.." ;
            int age;
            std::cin >> age;
            addUserDetails(nm, age);
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        displayDetails();
        std::cout << "Enter Username to find: ";
        std::string user;
        std::getline(std::cin, user);
        findUserDetails(user);

        for (int i = 1; i <= 3; ++i)
        {
            std::cout << "Enter user name..";
            std::string nm;
            std::getline(std::cin, nm);
            std::cout << "Enter user age..";
            int age;
            std::cin >> age;
            addUserPairDetails(nm, age);
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        displayDetails();
        
        for (auto i = 1; i < 6; ++i)
        {   
            std::cout << "String: " << " ";
            std::string mystr;
            std::getline(std::cin, mystr);
            addStrToVector(mystr);
        }
        displayStrVectors();
        eraseStrVectorElement();
        displayCities();
        std::cout << "String to find: " << " ";
        std::string findstr;
        std::getline(std::cin, findstr);
        findStrVector(findstr);
        std::cout << "Unsorted: { 45, 67, 90, -10, -1, 87 }" << '\n';
        sortNumbersAsc();
        std::cout << '\n';
        sortNumbersDesc();*/
        break;
    }
    default:
        std::cout << "No valid option selected.";
        break;
    }
}




