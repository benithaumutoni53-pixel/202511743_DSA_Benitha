#include <iostream>
using namespace std;

const int MAX = 50;

string name[MAX];
int marks[MAX][3];
float average[MAX];

int countStudents =0;

float calcAverage(int i) {
	return (marks[i][0] + marks[i][1] + marks[i][2]) / 3.0;
	
}

void addStudent(){
	cout << "\nEnter student name:";
	cin >> name[countStudents];
	
	cout << "Enter 3 subject marks:\n";
	for (int i = 0; i < 3; i++) {
		cout << "Mark " << i + 1  << ": ";
		cin >> marks[countStudents][i];
		
	}
	 
	 average[countStudents] = calcAverage(countStudents);
	 
	 countStudents++;
	 cout << "Student added succesfully!\n";
	 
}

void showResults() {
	cout << "\n===== RESULTS =====\n";
	
	for (int i = 0; i < countStudents; i++) {
		cout << "\nName: " << name[i];
		cout << "\nMarks: " << marks[i][0] << " ," << marks[i][1] << " ," << marks[i][2];	
		cout << "\nAverage: " << average[i];
	cout << "\n---------------";
}
}

int main(){
	int choice;
	
	do {
		cout << "\n===== MENU =====\n";
		cout << "1. Add Student\n";	
		cout << "2. Show Results\n";
		cout << "3. exit\n";
		cout << "Enter choice: ";
		cin >> choice;
		
		if (choice == 1) {
			addStudent ();
			
		}
		else if (choice == 2){
			showResults();
			
		}
		else if (choice == 3) {
			cout << "Goodbye!\n";
			
		}
		else {
			cout << " Invalid choice!\n";
		}
	} while (choice != 3);
	return 0;

}

