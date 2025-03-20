#include <iostream>
#include <string>
#include "initialLearning.h"

void initialLearning()
{
	
	////    /*this is a comment*/
	//std::cout << "Hello World!" << '\n';
	//std::cout << "C++ rocks!" << '\n';

	//// variables definition
	//char var1 = 'p';
	//int var2 = 2025;
	//double var3 = 9.99;

	//std::cout << "Value of var1 is " << var1 << '\n';
	//std::cout << "Value of var2 is " << var2 << '\n';
	//std::cout << "Value of var3 is " << var3 << '\n';

	//// arithmetric operators
	//int a = 5;
	//double b = 10;
	//double c = a + b;
	//double d = a / b;
	//double e = a * b;
	//double f = b - a;
	//double g = a % 2;

	//std::cout << "Addition: " << c << '\n';
	//std::cout << "Division: " << d << '\n';
	//std::cout << "Multiplication: " << e << '\n';
	//std::cout << "Subtraction: " << f << '\n';
	//std::cout << "Modulo: " << g << '\n';


	//// compound assignment operators
	//int x = 0;
	//x += 4;
	//x -= 2;
	//x *= 40;
	//x /= 2;
	//std::cout << "Value of x is " << x << '\n';


	//// increment and decrement operators
	//int var4 = 1;

	//std::cout << "Value before " << var4 << '\n';
	//std::cout << "Value pre increment " << ++var4 << '\n'; //2
	//std::cout << "Value post increment " << var4++ << '\n'; //2
	//std::cout << "Value after " << var4 << '\n';

	//std::cout << "Value pre decrement" << --var4 << '\n'; //2
	//std::cout << "Value post decrement" << var4-- << '\n'; //2
	//std::cout << "Value after " << var4 << '\n';

	//// user input up to 2 values
	//int user_input_a = 0;
	//double user_input_b = 0.0;

	//std::cout << "Enter a valid integer and a double separated by space press enter... ";
	//std::cin >> user_input_a >> user_input_b;
	//std::cout << "Values entered by user are " << user_input_a << " and " << user_input_b;


	////user input 3 values
	//char mychar1 = 'a';
	//int  myint1 = 0;
	//double mydouble1 = 0.0;

	//std::cout << "Enter a char, an int and a double separated by space and press enter..." << '\n';
	//std::cin >> mychar1 >> myint1 >> mydouble1;
	//std::cout << "Values entered are: " << mychar1 << ", " << myint1 << " and " << mydouble1 << '\n';

	//int user_int1 = 0;
	//int user_int2 = 0;
	//int total = 0;

	//std::cout << "Inform two valid integers separated by space and press enter: " << '\n';
	//std::cin >> user_int1 >> user_int2;
	//total = user_int1 + user_int2;
	//std::cout << "Total sum is : " << total << '\n';

	//int x = 123;
	//x++;
	//x += 20;
	//std::cout << "Value of x is " << x << '\n';

	//int result = 9 / 2;
	//double result_double = 9.0 / 2;
	//std::cout << "Result is " << result << '\n';
	//std::cout << "Result is " << result_double << '\n';


	//// Arrays
	//char mychar_array[5] = { 'P', 'a', 't', 'y' };
	//int myint_array[3] = { 12, 22, 68 };

	//std::cout << "Value in char array pos 2 is: " << mychar_array[2] << '\n';
	//std::cout << "Value in int arra pos -1 is: " << myint_array[0] << '\n';


	//// Pointers - stores the memory adrdress of a variable
	//int var_p1 = 2;
	//int* p = nullptr;
	//p = &var_p1;
	//std::cout << "Value of variable is: " << var_p1 << " and its pointer is: " << p << '\n';

	//// Reference - alias for another variable, any change to the reference will affect the original variable
	//int myint_1 = 144;
	//int& ref_int = myint_1;
	//ref_int = 12;
	//std::cout << "Variable value is " << myint_1 << " and reference value is " << ref_int << '\n';

	//// Const reference - read only alias - it does not allow change to the content of the variable
	//int myint_2 = 121;
	//int const& cnt_int = myint_2;
	//// cnt_int = 12; // expected error not able to change the value of a constant reference

	///* Chapter 15: Exercises */ 
	//// Array Definition
	//double my_array[5] = {-1.2, -2.4, 0.3, 1.5, 2.6};
	//std::cout << "Before change: " << my_array[1] << " and " << my_array[4] << '\n';
	//my_array[1] = -7.8;
	//my_array[4] = 2.4;
	//std::cout << "After change: " << my_array[1] << " and " << my_array[4] << '\n';
	//
	//// Pointer to an Object
	//double d = 8.5;
	//double* my_ptr5 = &d;
	//std::cout << "Value pointer points to is: " <<  *my_ptr5 << '\n';

	//// Reference Type
	//double mydouble = 1.4;
	//double& myref = mydouble;
	//myref = 2.8;
	//std::cout << "My original and ref values are: " << mydouble << " and " << myref << '\n';
	//mydouble = 8.2;
	//std::cout << "My original and ref values are: " << mydouble << " and " << myref << '\n';
	//
	
	//// Strings
	//std::string str_part1 = "All we need is ";
	//std::string str_part2 = "Love!";
	//std::string str_final = str_part1 + str_part2;
	//std::cout << "What do we need? " << str_final << '\n';

	//std::string fullname;
	//std::cout << "Inform enter your fullname and press enter." << '\n';
	//std::getline(std::cin, fullname);
	//std::cout << "Hello there, " << fullname << " !" << '\n';

	//std::string fullname = "John Doe";
	//std::string firstname = fullname.substr(0, 4);
	//std::string lastname = fullname.substr(5, 3);
	//std::cout << "Full name is: " << fullname  << '\n';
	//std::cout << "First name is: " << firstname << '\n';
	//std::cout << "Last name is: " << lastname << '\n';


	/*std::string sentence = "Hello C++ World!";
	std::string strtofind = "C++";
	auto found = sentence.find(strtofind);
	if (found == std::string::npos)
	{
		std::cout << "String not found!";
	}
	else
	{
		std::cout << "String " << strtofind << " found at the position " << found << "!" << '\n';
	}*/

	/* Chapter 18 - Exercises */
	// a simple if-statement
	//bool a = false;
	//if (a) {
	//	std::cout << "Variable `a` is True!" << '\n';
	//}
	//else
	//{
	//	std::cout << "Variable `a` is False!" << '\n';
	//}
		
	// logical operators
	//int my_value = 95;
	//if (my_value > 100 && my_value < 300)
	//{
	//	std::cout << "The value is greater than 100 and less than 300." << '\n';
	//}
	//else
	//{
	//	std::cout << "The value is neither greater than 100 nor less than 300!" << '\n';
	//}
	//bool mycondition = true;
	//if (my_value > 100 || mycondition) 
	//{
	//	std::cout << "The value is either greater than 100 or mycondition is true" << '\n';
	//}
	//else
	//{
	//	std::cout << "The value is not greater than 100 and the bool variable is false" << '\n';
	//}
	//bool mynegcondition = !mycondition;
		
	// the switch-statement
	//int my_val = 3;
	//switch (my_val)
	//{case 1:
	//	std::cout << "Value is in range [1 to 4], val: " << my_val << '\n';
	//	break;
	//case 2:
	//	std::cout << "Value is in range [1 to 4], val: " << my_val << '\n';
	//	break;
	//case 3:
	//	std::cout << "Value is in range [1 to 4], val: " << my_val << '\n';
	//	break;
	//case 4:
	//	std::cout << "Value is in range [1 to 4], val: " << my_val << '\n';
	//	break;	
	//default:
	//	std::cout << "Value is NOT in range [1..4]." << '\n';
	//	break;
	//}
		
	// the for-loop
	//int counter = 0;
	//	for (counter; counter < 15; counter++)
	//{
	//	std::cout << "Counting..." << counter << '\n';
	//}

	// array and the for-loop
	//int my_array[5] = { 10, 40, 60, 120, 144 };
	//for (int i = 0; i < 5; i++)
	//{
	//	std::cout << "Item value is " << my_array[i] << " at index: " << i << '\n';
	//}

	// the const type qualifier
	//const int int_var1 = 5;
	//const double double_var2 = 5.1;
	//const std::string str_var3 = "Yeah!";
	//const int int_var2 = int_var1;
	//std::cout << "Variables values are respectively: " 
	//	<< int_var1 << ", " << double_var2 << ", " << str_var3 << " and " << int_var2 << '\n';

	/* Chapter 22 - Exercises */
	// Dynamic Storage Duration  (****New/Delete for learning purposes only**** 
	// its use is discouraged - smart pointers (will be taught later in this course)
	
	//int* counter = new int{ 85 };   //allocate heap memory
	//std::cout << "Value: " << *counter;
	//delete counter;  //deallocate it

	// Automatic and Dynamic Storage Durations
	//int x = 123;
	//std::cout << "Value of x is: " << x << '\n';
	//int* y = new int{ x };
	//std::cout << "Pointer address is: " << &y << '\n';
	//std::cout << "Pointer to the allocated memory address is: " << y << '\n';
	//std::cout << "Value pointer points to is: " << *y << '\n';
	//delete y;

};
