#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <thread>
#include <chrono>
#include "gidnc.hpp"

// FSTREAM will be used for gyroscopic temperature barometric speedometric and altimetric measurements
// GIDNC = Guidance and Internal Distributed Navigation Computer

std::string exiting = {"EXITING..."}; 

struct errors // Struct for errors
{

	public:

		enum e_code
		{
		
			ERRORNO1 = 4, // Error for incorrect input
			ERRORNO2 = 1, // Error for internal issue
			ERRORNO3 = 3 // Error for unknown issue
		
		}; 

};
errors error;

class control
{
	
	public:

		int initialize(void)
		{

			std::cout << "\033c";
			std::cout << "Welcome to the GIDNC\n";
			klar();
			return (0);

		}

};

int main(void)
{

	std::string errorgen = {"ERROR "}; // General ERROR notation
	
	error.ERRORNO1; // ERROR for incorrect input
	error.ERRORNO2; // Error for internal issue
	error.ERRORNO3; // Error for unknown issue

	std::ostringstream(s1);
	s1 << errorgen << error.ERRORNO1;
	std::string s2error = s1.str();

	std::string launch;

	control wulf_start;

	std::cout << "Hello I'm " << "\u03BD";
	std::cout << "\n\nEnter Start to launch the program: ";
	std::cin >> launch;

	if (launch == "Start")
	{

		std::cout << "Starting program...\n";
		for (auto i = 0; i < 3; ++i)
		{

			std::cout << "\nBooting...";

            		std::this_thread::sleep_for (std::chrono::seconds(1));
        
		}

		wulf_start.initialize();

	}

	else
	{

		std::cerr << "\nYou have not entered Start...";
		std::cerr << "\n\n" << s2error;
		std::cerr << "\n\n" << exiting << '\n';
		return (0);
 
	}

	std::cout << "\nPress enter to continue...";
	std::cin.ignore();
	std::cin.get();
	return (0);

}
