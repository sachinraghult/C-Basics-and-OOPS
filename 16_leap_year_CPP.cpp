#include <iostream>
using namespace std;

int main()
{
	int year;
	
	cout << "Enter the year to check it's a leap year or not : " << endl;
	cin >> year;
	
	if(year % 4 == 0)
	{
		if(year % 100 == 0)
		{
			if(year % 400 == 0)
			{
				cout << "Leap year" << endl;
			}
			else
			{
				cout << "Not a Leap year" << endl;
			}
		}
		else
		{
			cout << "Leap year" << endl;
		}
	}
	else
	{
		cout << "Not a Leap year" << endl;
	}
	
	return 0;
}
