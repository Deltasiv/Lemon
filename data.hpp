#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

// This file will be used for data collection
// This file will be decided on where it is included

int info(void)
{

	std::string e = {"ERROR "};

	enum e
	{

		e78 = 78, // Error for file not found or error with file
		e79 = 79, // Error for internal issue
		e80 = 80 // Error for unknown

	}; 

	ifstream inFile;
	// inFile.open(""); Write the name of file
	
	// Check for error
	if (inFile.fail())
	{

		std::cerr << ("\nFile not found\n\n");
		std::cerr << e << e78;

		return (0);
	
	}

	std::cout << ("\n\nTesting information\n");

	return (0);

}
