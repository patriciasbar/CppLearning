#include <iostream>
#include "threads_utils.h"


void downloadMessage()
{
	for (auto i = 0; i < 5; ++i)
	{
		std::cout << "Downloading..." << '\n';
	}
}


void uploadMessage()
{
	for (auto i = 0; i < 5; ++i)
	{
		std::cout << "Uploading..." << '\n';
	}
}




