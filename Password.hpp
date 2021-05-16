#pragma once

#include <string>
#include <fstream>

static const std::string charSet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789`~!@\"#$;:%^&?*()_-+=\|[]{}'<,>./";
static unsigned int amountChars = charSet.length();

class Password
{
public:
	Password();
	Password(unsigned int requiredLength);
	~Password();

	void generatePassword();
	void sendPasswordToFile(const std::string fileName);
private:
	unsigned int length;
	char* password;
};
