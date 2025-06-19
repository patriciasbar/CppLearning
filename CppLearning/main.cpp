#include <iostream>
#include<fstream>
#include <sstream>
#include<memory>
#include<vector>
#include<algorithm>
#include<functional>
#include<thread>
#include <direct.h>  
#include "calc_utils.h"
#include "string_exercises.h"
#include "initialLearning.h"
#include "classes_exercises.h"
#include "Person.h"
#include "files_utils.h"
#include "containers_utils.h"
#include "threads_utils.h"


int main()
{
    int option;
    std::cout << "Menu: \n "
        << "99 - Basics \n"
        << " 0 - initialLearning \n "
        << " 1 - printMessage \n "
        << " 2 - customMessage \n "
        << " 3 - multiplication \n "
        << " 4 - loginChecker \n "
        << " 5 - Division \n "
        << " 6 - Classes \n "
        << " 7 - Files \n "
        << " 8 - Strings \n "
        << " 9 - Containers \n "
        << "10 - Lambda Functions \n";
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
        std::cout << "Function was called: " << counter << '\n';*/

        std::shared_ptr<Logger> log1 = std::make_shared<Logger>();
        std::shared_ptr<Logger> log2 = log1;
        std::shared_ptr<Logger> log3 = log1;
        std::shared_ptr<Logger> log4 = log1;

        std::cout << log1.use_count() << '\n';


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
        displayCountryDetails();
        break;
    }
    case 10 :
    {
        auto myMessage = []() {std::cout << "Love is the best answer to everything! Amen!" << '\n'; };
        myMessage();

        auto result = [](int n1, int n2  ) {return n1 + n2; };
        std::cout << "Result is " << result(3, 7) << '\n';

        auto isEvenOrOdd = [](int n) {if (n % 2 == 0) { std::cout << n << " is Even!" << '\n'; } else { std::cout << n << " is Odd!" << '\n'; } };
        for (int i = 1; i < 15; i++)
        {
            isEvenOrOdd(i);
        }

        std::vector<int> v = {2, 6, 99, 0, -1, 14};
        std::sort(std::begin(v), std::end(v), [](int x, int y) {return x > y; });
        for (auto item : v)
        {
            std::cout << item << " ";
        }

        int even_counter = std::count_if(std::begin(v), std::end(v), [](int n) {return n % 2 == 0; });
        std::cout << "\nTotal count of even numbers: " << even_counter <<'\n';

        int num = 8;
        std::cout << "Current value of num: " << num <<'\n';
        auto replace_num = [&num]() {++num; };
        replace_num();
        std::cout << "New value of num: " << num;

        

        break;
    }
    case 99:
    {
    /*concurrency*/
        std::thread down(downloadMessage);
        std::thread up(uploadMessage);
        down.join();
        up.join();
        break;
    }
    default:
        std::cout << "No valid option selected.";
        break;
    }
    //constexpr bool result2 = isEven(5); // OK, compile-time known
    //std::cout << result2 << '\n';

    /*constexpr int maxUsers = 1001;
    static_assert(maxUsers <= 1000, "Max users has reached its max value!");*/
    
}




