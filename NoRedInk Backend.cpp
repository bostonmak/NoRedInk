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

void setupQuestions(std::unordered_map<int, std::vector<int>>* strandMap, std::unordered_map<int, std::vector<int>>* standardMap, std::unordered_map<int, float>* questionMap) {
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

	std::vector<int> std1;
	std1.push_back(1);
	std1.push_back(2);
	standardMap->emplace(1, std1);
	std::vector<int> std2;
	std2.push_back(3);
	standardMap->emplace(2, std2);
	std::vector<int> std3;
	std3.push_back(4);
	std3.push_back(5);
	std3.push_back(6);
	standardMap->emplace(3, std3);
	std::vector<int> std4;
	std4.push_back(7);
	std4.push_back(8);
	standardMap->emplace(4, std4);
	std::vector<int> std5;
	std5.push_back(9);
	std5.push_back(10);
	std5.push_back(11);
	standardMap->emplace(5, std5);
	std::vector<int> std6;
	std6.push_back(12);
	standardMap->emplace(6, 12);

	std::vector<int> str1;
	str1.push_back(1);
	str1.push_back(2);
	str1.push_back(3);
	strandMap->emplace(1, str1);
	std::vector<int> str2;
	str2.push_back(4);
	str2.push_back(5);
	str2.push_back(6);
	strandMap->emplace(2, str2);
}

std::vector<int> getQuestions(int numQuestions, std::unordered_map<int, std::vector<int>>* strandMap, std::unordered_map<int, std::vector<int>>* standardMap, std::unordered_map<int, float>* questionMap) {
	std::vector<int> retQuestions;
	std::unordered_map<int, int> standardRepeats;
	bool strand = true;
	for (int i = 0; i < numQuestions; ++i) {
		int standardIndex = (i / 2) % 3;
		if (strand) {
			std::vector<int> standards = (*strandMap)[1];
			int standard = standards[standardIndex];
			std::vector<int> questions = (*standardMap)[standard];
			bool questionAdded = false;
			while (!questionAdded) {
				auto iter = questions.begin();
				for (iter; iter != questions.end(); ++iter) {
					bool repeatFound = false;
					for (auto retIter = retQuestions.begin(); retIter != retQuestions.end(); ++retIter) {
						if (*iter == *retIter) {
							repeatFound == true;
							break;
						}
					}
					if (!repeatFound) {
						retQuestions.push_back(*iter);
						break;
					}
				}
				if (iter == questions.end()) {
					if (standardRepeats.count(standard) == 0) {
						standardRepeats[standard] = 1;
					}
					else {
						++(standardRepeats[standard]);
					}
				}
			}
		}
	}

}

int _tmain(int argc, _TCHAR* argv[])
{
	int numQuestions = promptNumQuestions();


	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	std::cin.get();
	return 0;
}

