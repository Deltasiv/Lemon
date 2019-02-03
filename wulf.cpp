#include <iostream>
#include <string>
#include <sstream>
#include <thread>
#include <chrono>
#include "gidnc.hpp"

std::string foobar = {"\033c"}; 

// FSTREAM will be used for gyroscopic temperature barometric speedometric and altimetric measurements
// GIDNC = Guidance and Internal Distributed Navigation Computer
// A temp password will be made for this time 

std::string exiting = {"EXITING..."}; 

struct errors // Struct for errors
{

	public:

		enum e_code
		{
		
			ERRORNO4 = 4, // Error for incorrect input
			ERRORNO1 = 1, // Error for internal issue
			ERRORNO2 = 2, // Error for incorrect password 
			ERRORNO3 = 3 // Error for unknown issue
			// More errors might be included later
		}; 

};
errors error;

class control
{
	
	public:

		struct light
		{
		
			public:

				char licht[3][25] = {"RED LIGHT", "YELLOW LIGHT", "GREEN LIGHT"};

		}; 	

		light lights;

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

	std::string temp_pass = {"WULFZITRONE"}; // Temporary password
	std::string pass; // string for entering temporary password
	std::string errorgen = {"ERROR "}; // General ERROR notation

	error.ERRORNO4; // ERROR for incorrect input
	error.ERRORNO2; // ERROR for incorrect password 
	error.ERRORNO1; // Error for internal issue
	error.ERRORNO3; // Error for unknown issue

	std::ostringstream(s7); 
	s7 << errorgen << error.ERRORNO2; 
	std::string s9error = s7.str(); 

	std::ostringstream(s1);
	s1 << errorgen << error.ERRORNO4;
	std::string s2error = s1.str();

	std::string launch;

	control light;
	control wulf_start;
	
	std::cout << ("Hello I'm ") << ("\u03BD\u03C5");
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
