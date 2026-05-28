#include <iostream>
#include <string>
#include "notepad.h"

using namespace std;

int main()
	
{
int option;
string fileName;

do
{
	cout << "\n==========MY NOTE SYSTEM =============" << endl;
	cout << "1. Create Notes" << endl;
	cout << "2. View Notes" << endl;
	cout << "3. Add Notes" << endl;
	cout << "4. Quit" << endl;
	cout << "5. Choose option: ";
	
	cin >> option;
	cin. ignore();
	
	switch(option)
	{
		case 1:
			cout << "Enter filename: ";
			getline(cin, fileName);
			
			createNote(fileName);
			break;
			case 2:
			cout << "Enter file name: ";
			getline(cin,fileName);
			break;
			
			case 3:
				cout << "Enter file name: ";
				getline(cin, fileName);
				break;
				
				case 4:
					cout << "program ended." << endl;
					break;
					
					default:
						cout << "Wrong option selected." << endl;
						
					}
					}while(option != 4);
	return 0;
}
	 



