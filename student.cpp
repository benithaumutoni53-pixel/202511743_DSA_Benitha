#include "student.h"

learner classroom[50];
int totallearners = 0;

void savelearner()

{ 
cout << "Enter learner Code: ";
cin >> classroom[totallearners].learnerCode;

cout << "Enter learner name: ";
cin >> classroom[totallearners].learnerName;

cout << "Enter learner age: ";
cin >> classroom[totallearners].learnerAge;

totallearners++;

	cout << "Saved Successfully\n";
}
void displaylearners()
{

for(int i =0; i < totallearners; i++)
{
	cout << "\nCode: " << classroom[i].learnerCode;
	cout << "\nName: " << classroom[i].learnerName;
	cout << "\nAge: " << classroom[i].learnerAge << endl;
	
}

}
