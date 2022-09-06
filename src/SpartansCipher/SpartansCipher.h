#pragma once
#include <string>
#include <iostream>


// faster by just a small bit if only returning a value...
// when outputting, string version is way faster
void SpartansCipher(const char* arr, const int length, const int slide)
{
	int bounds = round((float)length / (float)slide);
	int encryptedArrLength = slide * bounds;
	char* encryptedArr = new char[encryptedArrLength]();
	memset(encryptedArr, ' ', encryptedArrLength);

	int row = 0, column = 0;
	for (int x = 0; x < length - 1; x++)
	{
		if (!(column >= encryptedArrLength))
			encryptedArr[column] = arr[x];
		column += slide;

		if (!((x + 1) % bounds))
		{
			row++;
			column = row;
		}
	}

	// I would return a pointer to the encrypted array but it seems messy for cleanup purposes

	for (int z = 0; z < encryptedArrLength; z++)
	{
		std::cout << encryptedArr[z];
	}
	std::cout << std::endl;

	delete[] encryptedArr;
}

void SpartansCipher(std::string message, const int slide)
{
	int bounds = round((float)message.length() / (float)slide);
	int encryptedStrLength = slide * bounds;
	std::string encryptedString(encryptedStrLength, ' ');

	int row = 0, column = 0;
	for (int x = 0; x < message.length(); x++)
	{
		if (!(column >= encryptedStrLength))
			encryptedString[column] = message[x];
		column += slide;

		if (!((x + 1) % bounds))
		{
			row++;
			column = row;
		}
	}

	std::cout << encryptedString << std::endl;
}