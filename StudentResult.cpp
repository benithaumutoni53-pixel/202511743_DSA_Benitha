#include <iostream>
#include <string>
using namespace std;

int findtotal(int scores[], int size)

{
	int total = 0;
	for (int i= 0; i < size; i++)
	{
		total = total + scores[i];
			}
			
		return total;
		
}


void showresult(string name, int scores[], int size)
{
	int total = findtotal(scores, size);
	float average = total / (float)size;
	
	cout << "\n===== SHOW RESULT =====" << endl;
	cout << "how many students do you want to enter?: " << name << endl;
	
	for (int i = 0; i < size; i++)
	{
		cout << " Subject " << i + 1 + 1 << " Marks: " << marks[i] << endl;
			}
		
			
			cout << "Total scores: " << total << endl;
			cout << "average scores: " << average << endl;
			
			if (average >= 80)
			{
				cout << "Status: Passed" << endl;
			}
			else 
			{
				cout << "status: Failed" << endl;
			}
			cout << "===============================\n" << endl;
		}
		
		int main()
		{
			int numberOfStudents;
			
			cout << "Enter number of Students: ";
			cin >> numberOfStudents;
			
			for (int s = 1; s <= numberOfStudents; s++)
			{
				string Name;
				int scores[3];
				
				cout << "\nstring name: ";
				 cin >> stringname;
				  
				  for (int i = 0; i < 3; i++)
				 	{
					 
				 cout << "Enter scores for Subject " << i + 1 << ": ";
				 cin >> marks[i];	
				 	}
				 	
				 	showresult(stringName, scores, 3);
				 	
				 }
				 
				 return 0;
				 }
				 	
				 	
				 	
		


