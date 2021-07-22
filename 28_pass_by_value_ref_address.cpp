#include <iostream>
using namespace std;

void PassByValue(int a,int b)
{
	int temp;
	temp = b;
	b = a;
	a = temp;
	
	cout << "\nIN PASS BY VALUE FUNCTION\n" << endl;
	cout << "The value of a is " << a << endl;
	cout << "The value of b is " << b << endl;
	
}

void PassByReference(int &a,int &b)
{
	int temp;
	temp = b;
	b = a;
	a = temp;
	
	cout << "\nIN PASS BY REFERENCE FUNCTION\n" << endl;
	cout << "The value of a is " << a << endl;
	cout << "The value of b is " << b << endl;
	
}
void PassByAddress(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	
	cout << "\nIN PASS BY ADDRESS FUNCTION\n" << endl;
	cout << "The value of a is " << *x << endl;
	cout << "The value of b is " << *y << endl;
	
}

int main()
{
	int a, b;
	
	cout << "Enter two different to swap those values : \n" << endl;
	cin >> a >> b;
	
	cout << "\nBEFORE CALLING FUNCTIONS\n" << endl;
	cout << "The value of a is " << a << endl;
	cout << "The value of b is " << b << endl;
	
	PassByValue(a,b);
	
	cout << "\nAFTER CALLING PASS BY VALUE\n" << endl;
	cout << "The value of a is " << a << endl;
	cout << "The value of b is " << b << endl;
	
	PassByReference(a,b);
	
	cout << "\nAFTER CALLING PASS BY REFERENCE\n" << endl;
	cout << "The value of a is " << a << endl;
	cout << "The value of b is " << b << endl;
	
	PassByAddress(&a,&b);
	
	cout << "\nAFTER CALLING PASS BY ADDRESS\n" << endl;
	cout << "The value of a is " << a << endl;
	cout << "The value of b is " << b << endl;
	
	return 0;
}
