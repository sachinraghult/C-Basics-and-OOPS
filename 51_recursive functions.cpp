#include <iostream>
using namespace std;

int add(int n)
{
	if(n != 0)
	{
		return n + add(n - 1);
	}
	else
	{
		return n;
	}
}
int main()
{
	int num, sum;
	
	cout << "Enter the number of natural numbers to be added : ";
	cin >> num;
	
	sum = add(num);
	
	cout << "The sum of first " << num << " natural numbers is " << sum;
}
