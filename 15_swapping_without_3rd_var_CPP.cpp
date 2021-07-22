#include <iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout << "Enter any two number for swapping : "<< endl;
	cin >> a >> b;
	
	cout << "\nThe value of a is " << a << endl;
	cout << "The value of b is " << b << endl;
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	cout << "\nAfter swapping two variables without using 3rd variable: " << endl;
	cout << "\nThe value of a is " << a << endl;
	cout << "The value of b is " << b << endl;
	
	return 0;
}
