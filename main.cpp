#include <iostream> 
#include "Student.h"
using namespace std;

int main()
{
	int choice;
	do
{

cout << "\n1. Save learner";
cout << "\n2.Display learners";
cout << "\n3. Exit";
cout << "\nChoose: ";
cin >> choice;

switch(choice)
{
	case 1:
		saveLearner();
		break;
		
		case 2:
			displayLearners();
			break;
			
			case 3:
				cout << "program Closed";
				break;
				
				default:
					cout << "invalid";
					
				}
				
			}while(choice != 3);
			
			return 0; 
		}

