// CodeHunter.cpp : Defines the entry point for the console application.
//Found error by reading line by line and playing code 
#include <iostream>
#include <string>
//used so code files all code as standard anddoesnt need STD to be called 
using namespace std;


int main()
{
	//seting all to 0 in a string 
	string textToAnalyze;
	int foo = 0;
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	int bar = 0;

	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);
	//code that analyze text
	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		//Counts vowles
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			++vowels; //changed to ++
		}
		//Counts constants 
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A' && textToAnalyze[i] <= 'Z'))
		{
			++consonants; ///commented out 
		}
		//counts the amount of digits
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
		}
		//counts amount of white space
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}
		else
		//Characters unknown such as special characters
		{
			++unknownCharacters;
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;
	//dispalys words in "" and calls upon function to fill in information 
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;
	//true-false statment 
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}
