#include <iostream>
using namespace std;

inline int volume(int a, int b, int c = 1)
{
	return a * b * c;
}
int main()
{
	int a = 5, b = 10, c = 15;
	
	cout << "\nThe volume of cuboid is " << volume(a,b) << endl;
	
	return 0;
}


