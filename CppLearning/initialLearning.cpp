#include <iostream>
#include <string>

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

	
}