/*
** Written by: Boston Mak
** Date: September 1, 2016
** Subject: NoRedInk Backend Coding Test
*/

#include <cstdio>
#include <iostream>

int promptNumQuestions() {
	int retVal = 0;
	while (retVal <= 0) {
		std::cout << "Please enter the number of questions you would like: ";
		std::cin >> retVal;

		if (retVal > 0) {
			return retVal;
		}
	}


}

int _tmain(int argc, _TCHAR* argv[])
{
	int numQuestions = promptNumQuestions();
	std::cout << numQuestions;

	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	std::cin.get();
	return 0;
}

