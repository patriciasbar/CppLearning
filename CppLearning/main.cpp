#include <iostream>
#include "loginchecker_utils.h"
#include "calc_utils.h"
#include "string_exercises.h"
#include "initialLearning.h"
#include "classes_exercises.h"
#include "Person.h"

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
        << " 6 - Classes exercises \n ";        
    std::cout << "Enter an option... ";
    std::cin >> option;
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
        loginChecker();
        break;
    case 5:
        std::cout << "Int division results: " << division(10, 5) << '\n';
        std::cout << "Double division results: " << division(12.5, 2.0) << '\n';
        break;
    case 6:
    {
        int counter;
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

        std::cout << "44 / 2 is equal to: " << Calculator::CalcInt::divNums(44, 2) << '\n';


        break;
    }

    default:
        std::cout << "No valid option selected.";
        break;
    }



}




