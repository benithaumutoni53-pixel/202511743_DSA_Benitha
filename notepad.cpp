#include "notepad.h"

void createNote(string fileName)
{
	ofstream notesFile(fileName.c_str());
	
	string message;
	
	if(notesFile.is_open())
	{
		cout << "write your notes (Types STOP to finish):" << endl;
		
		while(true)
			{
			
			getline(cin, message);
			if(message == "STOP")
		{
		break;
	}
	notesFile.close();
	cout << "Notes saved." << endl;
}
}
else
{
	cout << "Unable to create file." <<endl;
}
	
}

void showNote(string fileName)
{
ifstream notesFile(fileName.c_str());
string data;

if(notesFile.is_open())
{
	cout << "\n---- FILE CONTENT ----" << endl;
	
	while(getline(notesFile, data))
	{
		cout << data << endl;
	}
	notesFile.close();
}
else
{
	cout << "File does not exist." << endl;
}
}
void addNote(string fileName)
{
	ofstream notesFile(fileName.c_str(), ios::app);
	string message;
	if (notesFile.is_open())
	{
	cout << "Add extra notes (types STOP to finish):" << endl;
	
	while(true)
	{
		getline(cin, message);
		if(message == "STOP")
		break;
		}
		
		notesFile.close();
		cout << "New notes added." << endl;
	}
	else
	{
		cout << "cannot open file." << endl;
		
	}
}
