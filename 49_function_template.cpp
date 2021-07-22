#include <iostream>
using namespace std;

template <typename A , typename B, typename C>
C add(A x, B y, C z)
{
	return x + y + z;
}

int main()
{
	cout << "The sum of two variables is " << add<int, float, double>(3.340976,5,9.2) << endl;
	cout << "The sum of two variables is " << add<float>(3.1,5.6,898) << endl;
	cout << "The sum of two variables is " << add<double>(3.2389,5.3456,98) << endl;
}
