#ifndef GIDNC_HPP_
#define GIDNC_HPP_

#include <string>
#include <cinttypes>
#include <vector>
#include <sstream>
#include "client.hpp"
#include "server.hpp"
#include <chrono>
#include <iostream>
#include <thread>

// GIDNC == Guidance and Internal Distributed Navigation Computer
// More hpp files will be included

// Chrono and Thread will be used for clock
// FSTREAM will be used for gyroscopic temperature barometric speedometric and altimetric measurements
// Server and client file are included

std::string fubar = {"\033c"};
std::string exitt = {"EXITING..."};

struct err
{
	
	public:

		enum err_code
		{
 
			FEHLERNO99 = 99, // Error for incorrect input
			FEHLERNO98 = 98, // Error for internal issue
			FEHLERNO97 = 97 // Error for unknown issue
			// More errors might be included later
		
		};

};
err fehler;

class info
{

	private:

		std::string information_options = {"Material, Fuel, Burn Time"};
		std::vector <std::string> material = {"\nPlastic", "\nMetal"};
		std::vector <std::string> fuel = {"\nEthanol", "\nNitric Acid"};

	public:

		void info_var(std::vector <std::string> mats, std::vector <std::string> f_mix, std::string info_opt)
		{

			material = mats;
			fuel = f_mix;
			information_options = info_opt;

		}

		int info_klar(void)
		{

			std::string opt;

			std::cout << ("Select one of the following options, ") << information_options << (" : ");
			std::cin >> opt;

			if (opt == "Fuel")
			{
               			
			       	for (uint32_t i = 0; i < fuel.size(); ++i)
               			{

                   	 		std::cout << fuel[i] << std::endl;

               			}
	
           		 }

          		 else if (opt == "Burn time")
           		 {

                		// Calculate burn time later

           		 }

           		 else if (opt == "Material")
           		 {

               			for (uint32_t n = 0; n < material.size(); ++n)
               			{

                   			std::cout << material[n] << std::endl;

                		}

            		 }

            		 else
            		 {

                			std::cout << ("\n\nYou have not entered a valid input please try again...\n\n");
					std::cout << (fubar);
                			info_klar();

            		 }

            		 return (0);

		}

};

class klar_gidnc
{

	public:

		int gidnc(void)
		{

			std::cout << ("Launch started...\n");
		
			for (auto z = 0; z < 3; ++z)
			{

				std::cout << ("\nBooting...");
				std::this_thread::sleep_for(std::chrono::seconds(1));

			}

		       	ipv4(); // Testing only not for actual code YET
                        ipv6(); // Testing only not for actual code YET
			
			// Include embedded file here perhaps    
			// Include the client and server here maybe


			return (0);

		}

};

int klar(void)
{

	std::string fehlergen = {"ERROR "}; // General ERROR notation
	
	fehler.FEHLERNO99; // Error for incorrect input
	fehler.FEHLERNO98; // Error for internal issue
	fehler.FEHLERNO97; // Error for unknown issue
		
	std::ostringstream(s3); 
	s3 << fehlergen << fehler.FEHLERNO99;
	std::string s4fehler = s3.str();

	klar_gidnc einsamer_wulf; // For launch
	info initiale; // For info

	std::string menu_op = {"\nLaunch - 1, Info - 2 , Help - 3, Quit - 4"};
	int menu_ops;

	std::cout << ("\nMenu options are below:\n");
	std::cout << menu_op;
	std::cout << ("\n\nPlease select one: ");
	std::cin >> menu_ops;

	if (menu_ops == 1)
	{

		std::cout << (fubar);
		einsamer_wulf.gidnc();

	}

	else if (menu_ops == 2)
	{

		std::cout << (fubar);
	       	initiale.info_klar();

	}

	else if (menu_ops == 3)
	{
	
		std::cout << ("Help menu...");
		std::cout << ("Closing application...") << std::endl;

	}
	
	else
	{
		
		std::cerr << ("\nYou have not entered a valid input or you entered Quit...");
		std::cerr << ("\n\n") << s4fehler;
		std::cerr << ("\n\n") << exitt << ('\n');
		return (0);

	}

	return (0);

}

#endif
