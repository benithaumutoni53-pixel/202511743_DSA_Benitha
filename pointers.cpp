#include <iostream>
using namespace std;
void swapData(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int numA, numB;
	
	cout << "Enter first number: ";
cin >> numA;

	cout << "Enter second number: ";
	cin >> numB;
	
	cout << "\nBefore swap";
	cout << "\nnumA = " << numA;
	cout << "\numB = " << numB;
	
	swapData(&numA, &numB);
	
	cout << "\n\nAfter swap";
	cout << "\nnumA = " << numA;
	cout << "\nnumB = " << numB;
	return 0;
}
