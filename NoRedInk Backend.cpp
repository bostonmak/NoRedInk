/*
** Written by: Boston Mak
** Date: September 1, 2016
** Subject: NoRedInk Backend Coding Test
*/

#include "stdafx.h"

#include <stdio.h>
#include <tchar.h>
#include <cstdio>
#include <iostream>
#include <vector>
#include <unordered_map>

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

void setupQuestions(std::unordered_map<int, int>* strandMap, std::unordered_map<int, int>* standardMap, std::unordered_map<int, float>* questionMap) {
	questionMap->emplace(1, 0.7f);
	questionMap->emplace(2, 0.6f);
	questionMap->emplace(3, 0.8f);
	questionMap->emplace(4, 0.2f);
	questionMap->emplace(5, 0.5f);
	questionMap->emplace(6, 0.4f);
	questionMap->emplace(7, 0.9f);
	questionMap->emplace(8, 0.1f);
	questionMap->emplace(9, 0.3f);
	questionMap->emplace(10, 0.6f);
	questionMap->emplace(11, 0.4f);
	questionMap->emplace(12, 0.2f);

	standardMap->emplace(1, 1);
	standardMap->emplace(1, 2);
	standardMap->emplace(2, 3);
	standardMap->emplace(3, 4);
	standardMap->emplace(3, 5);
	standardMap->emplace(3, 6);
	standardMap->emplace(4, 7);
	standardMap->emplace(4, 8);
	standardMap->emplace(5, 9);
	standardMap->emplace(5, 10);
	standardMap->emplace(6, 12);

	strandMap->emplace(1, 1);
	strandMap->emplace(1, 2);
	strandMap->emplace(1, 3);
	strandMap->emplace(2, 4);
	strandMap->emplace(2, 5);
	strandMap->emplace(2, 6);
}

std::vector<int> getQuestions(int numQuestions) {
	bool strand = false;

}

int _tmain(int argc, _TCHAR* argv[])
{
	int numQuestions = promptNumQuestions();


	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	std::cin.get();
	return 0;
}

