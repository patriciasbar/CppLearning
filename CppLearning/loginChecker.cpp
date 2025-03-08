#include <iostream>
#include <string>

void loginChecker()
{
	std::string usernm, pwd, role, access_type;
	int role_id, attempts = 0;

	while (attempts < 3)
	{
		std::cout << "user: " ;
		std::getline(std::cin, usernm);
		std::cout << "password: " ;
		std::getline(std::cin, pwd);

		if (usernm.empty() || pwd.empty())
		{
			if (usernm.empty())
			{
				std::cout << "Please enter a username." << '\n';
			}
			if (pwd.empty())
			{
				std::cout << "Please enter a password." << '\n';
			}

		}
		else
		{
			if (usernm == "admin" && pwd == "admin123")
			{
				role = "Admin";
				role_id = 1;
			}
			else if (usernm == "user" && pwd == "user123")
			{
				role = "User";
				role_id = 2;
			}
			else if (usernm == "guest")
			{
				role = "Guest";
				role_id = 3;
			}
			else
			{
				std::cout << "Access denied." << '\n';
				role_id = 0;
			}

			switch (role_id)
			{
			case 1:
				access_type = "Full system access";
				break;
			case 2:
				access_type = "Regular access";
				break;
			case 3:
				access_type = "Limited access";
				break;
			default:
				access_type = "No access.";
				break;
			}
			if (role_id != 0)
			{
				std::cout << "Welcome, " << usernm << "\nYour permissions: " << access_type;
				return;
			}
		}
		attempts++;
		if (attempts < 3)
		{
			std::cout << "Please try it again." << '\n';
		}
		
	}	
	if (attempts == 3)
	{
		std::cout << "Exceeded number of tries." << '\n';
	}
		
			
}