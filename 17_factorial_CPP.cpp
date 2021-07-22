#include <iostream>
using namespace std;

int main()
{
	int number,factorial = 1;
	
	cout << "Enter the number for which factorial should be found : " << endl;
	cin >> number;
	
	for(int i = 1;i <= number;i++)
	{
		factorial *= i;
	}
	
	cout << "\nThe factorial of " << number << " is " << factorial << endl;
	
	return 0;
}
