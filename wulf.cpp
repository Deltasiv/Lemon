#include <iostream>
#include <string>
#include <sstream>
#include <thread>
#include <chrono>
#include "gidnc.hpp"

// FSTREAM will be used for gyroscopic temperature barometric speedometric and altimetric measurements
// GIDNC == Guidance and Internal Distributed Navigation Computer
// A temp password will be made for this time
// New password can be expected

std::string foobar = {"\033c"}; // clear screen 
std::string exiting = {"EXITING..."}; // status exiting

class control 
{

	public:

		struct errors // Struct for errors
		{

			public:

				enum e_code // enum for errors which are represented by numbers
				{
		
					ERRORNO4 = 4, // Error for incorrect input
					ERRORNO1 = 1, // Error for internal issue
					ERRORNO2 = 2, // Error for incorrect password 
					ERRORNO3 = 3 // Error for unknown issue
					// More errors might be included later
			
				};

		}; 

		struct light
		{
		
			public:

				char licht[3][25] = {"RED LIGHT", "YELLOW LIGHT", "GREEN LIGHT"};

		}; 	
		
		light lights; // The struct above
		errors mistake; // The struct for error values

		int initialize(void)
		{

			std::cout << (foobar);
			std::cout << ("Welcome to the GIDNC\n");
			klar();
		
			return (0);

		}

};

int main(void)
{

	control wulf_start;
	control errors;

	std::string temp_pass = {"WULFZITRONE"}; // Temporary password
	std::string pass; // string for entering temporary password
	std::string errorgen = {"ERROR "}; // General ERROR notation

	wulf_start.mistake.ERRORNO4; // ERROR for incorrect input
	wulf_start.mistake.ERRORNO2; // ERROR for incorrect password 
	wulf_start.mistake.ERRORNO1; // Error for internal issue
	wulf_start.mistake.ERRORNO3; // Error for unknown issue

	std::ostringstream(s7); 
	s7 << errorgen << wulf_start.mistake.ERRORNO2; 
	std::string s9error = s7.str(); 

	std::ostringstream(s1);
	s1 << errorgen << wulf_start.mistake.ERRORNO4;
	std::string s2error = s1.str();

	std::string launch;

	control light;
	
	std::cout << ("Hello I'm ") << ("\u03BD\u03C5"); // Program name is nu
	std::cout << ("\n\nEnter the password to start the program\n\n");	
	std::cin >> pass;
	std::cout << (foobar);

	if (pass == "WULFZITRONE")
	{

		std::cout << wulf_start.lights.licht[2];
		std::cout << ("\n\nEnter Start to launch the program: ");
		std::cin >> launch;

		if (launch == "Start")
		{

			std::cout << ("\n\nStarting program...\n\n");
			for (auto i = 0; i < 4; ++i)
			{

				std::cout << ("\nBooting...");
            			std::this_thread::sleep_for(std::chrono::seconds(1));
        
			}
			
			std::this_thread::sleep_for(std::chrono::seconds(1));
			wulf_start.initialize();

		}

		else
		{

			std::cerr << ("\nYou have not entered **Start**");
			std::cout << foobar; 

			for (auto r = 0; r < 4; ++r)
			{

				std::cout << ("..."); 
				std::this_thread::sleep_for(std::chrono::seconds(1)); 

			}
		
			std::cerr << ("\n\n") << s2error;
			std::cerr << ("\n\n") << exiting << ('\n');
			return (0);
 
		}

	}

	else 
	{

		std::cerr << wulf_start.lights.licht[0];
		std::cerr << ("\n\nYou have not entered a valid password...");
		std::cerr << ("\n\n") << s9error;
		std::cerr << ("\n\n") << exiting << ('\n'); 
		return (0); 

	}

	std::cout << ("\n\nPress enter to continue...");
	std::cin.ignore();
	std::cin.get();
	return (0);

}
