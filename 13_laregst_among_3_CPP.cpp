#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout << "Enter three  different numbers to find the largest among the given numbers :" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	
	if((a >= b) && (a >= c))
	{
		cout << "The largest number among " << a << " " << b << " and " << c << " is " << a << endl;
	}
	else if((b >= a) && (b >= c))
	{
		cout << "The largest number among " << a << " " << b << " and " << c << " is " << b << endl;
	}
	else
	{
		cout << "The largest number among " << a << " " << b << " and " << c << " is " << c << endl;
	}
	
	return 0;
}
