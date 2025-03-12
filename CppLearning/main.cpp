#include <iostream>
#include "loginchecker_utils.h"
#include "calc_utils.h"
#include "string_utils.h"

#include "initialLearning_utils.h"



int main()
{
    printMessage();
    //initialLearning();
    //loginChecker();
    int my_result = multiplication(2, 4);
    std::cout << "The result is: " << my_result;
    std::string mynickname = "Stardust";
    customMessage(mynickname);
    std::cout << "Int division results: " << division(10, 5) << '\n';
    std::cout << "Double division results: " << division(12.5, 2.0) << '\n';


}



