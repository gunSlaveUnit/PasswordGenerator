#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Password.hpp"

void displayCompletionMessage();

int main(int argc, const char** argv)
{
	srand(time(NULL));

	if (!strcmp(argv[1], "-c"))
	{
		std::string file = "password.txt";

		// argv[2] - number of passwords.
		// argv[3] = passwords length.
		for (int i = 0; i < atoi(argv[2]); ++i)
		{
			Password pass(atoi(argv[3]));

			pass.generatePassword();
			pass.sendPasswordToFile(file);
		}

		displayCompletionMessage();
	}
	else if (!strcmp(argv[1], "-d"))
	{
		std::string mainPartFileName = "password";
		std::string fileExtension = ".txt";

		for (int i = 0; i < atoi(argv[2]); ++i)
		{
			Password pass(atoi(argv[3]));

			pass.generatePassword();
			pass.sendPasswordToFile(mainPartFileName + std::to_string(i) + fileExtension);
		}

		displayCompletionMessage();
	}
	else
		std::cout << "Error: unknown operation mode.\n";
}

void displayCompletionMessage()
{
	std::cout << "Your passwords have been created successfully.\n";
	std::cout << "Done!\n";
}
