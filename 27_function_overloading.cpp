#include <iostream>
using namespace std;

int add(int a, int b)
{
	cout << "Function1" << endl;
	return a + b;
}

int add(int a, int b, int c)
{
	cout << "Function2" << endl;
	return a + b + c;
}

double add(int a, double b)
{
	cout << "Function3" << endl;
	return a + b;
}

double add(int a, double b, int c)
{
	cout << "Function4" << endl;
	return a + b + c;
}


int main()
{	
	cout << add(2,4) << endl << endl;
	cout << add(2,4,6) << endl << endl;
	cout << add(2,4.235) << endl << endl;
	cout << add(2,4.235,6) << endl << endl;
	
	return 0;
}
