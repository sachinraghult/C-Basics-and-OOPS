#include <iostream>
using namespace std;

int maximum(int a, int b);

int main()
{
	int a, b;
	
	cout << "Enter any two different numbers to find the greatest : \n" << endl;
	cin >> a >> b;
	
	cout << "\nThe greatest among " << a << " and " << b << " is " << maximum(a,b) << endl;
	
	return 0;
}

int maximum(int a, int b)
{
	if(a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
