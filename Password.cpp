#include "Password.hpp"

Password::Password() : length(0), password(nullptr)
{
}

Password::Password(unsigned int requiredLength) : length(requiredLength), password(new char[length])
{
}

Password::~Password()
{
	delete[] password;
}

void Password::generatePassword()
{
	for (int i = 0; i < length; ++i)
		password[i] = charSet[rand() % amountChars];
}

void Password::sendPasswordToFile(const std::string fileName)
{
	std::ofstream fileToSavePassword;

	fileToSavePassword.open(fileName, std::ios::app);

	for (int i = 0; i < length; ++i)
	{
		fileToSavePassword << password[i];
	}

	fileToSavePassword << std::endl;

	fileToSavePassword.close();
}
