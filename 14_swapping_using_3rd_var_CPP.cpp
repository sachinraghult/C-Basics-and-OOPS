#include <iostream>
using namespace std;

int main()
{
	int a,b,temp;
	
	cout << "Enter any two numbers : "<< endl;
	cin >> a >> b;
	
	cout << "The value of a is " << a << endl;
	cout << "The value of b is " << b << endl;
	
	temp = b;
	b = a;
	a = temp;
	
	cout << "\nAfter swapping ......\n\nThe value of a is " << a << endl;
	cout << "The value of b is " << b << endl;
	
	return 0;
}
