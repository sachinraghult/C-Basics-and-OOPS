#include <iostream>
using namespace std;

int main()
{
	int number;
	
	cout << "Enter a number to find whether it is even or odd :  ";
	cin >> number;
	
	if(number % 2 == 0)
	{
		cout << "The given number is EVEN" << endl;
	}
	else
	{
		cout << "The given number is ODD" << endl;
	}
	
	return 0;
}
