#ifndef Student_h
#define Student_h

#include <iostream>
#include <string>
using namespace std;

struct learner
{
	int learnerCode;
	string learnerName;
	int learnerAge;
};
void saveLearner();
void displayLearners();

#endif
