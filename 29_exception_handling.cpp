#include <iostream>
using namespace std;

int main()
{
	int numerator, denominator , result;
	
	cout << "Enter numerator and denominator for division : \n" << endl;
	cin >> numerator >> denominator;
	try
	{
		
		try
		{	
			if(denominator == 0)
			{
				throw numerator;
			}
			else
			{
				result = numerator / denominator;
				cout << "\nResult is " << result << endl;
			}
		}
	
		catch(int a)
		{
			cout << "\nThe number " << a;
			throw denominator;
		}
	
	}
	
	catch(int b)
	{
		cout << " cannot be divided by " << b << endl;
	}

	return 0;
}
