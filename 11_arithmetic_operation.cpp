#include <iostream>
using namespace std;

int main()
{
	int number,a,b;
	
	cout << "Arithmetic Operation :\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo\n\n";
	
	cout << "Select any operation from the above menu by entering those respective numbers (1 to 5) :  ";
	cin >> number;
	
	cout << "\nNow enter two numbers to perform the chosen operation : "<<endl;
	cin >> a;
	cin >> b;
	cout << endl;
	
	switch(number)
	{
		case 1:
			cout << "ADDITION :"<<endl<<endl<< a << " + " << b << " = " << (a+b) << endl;
			break;
		case 2:
			cout << "SUBTRACTION :"<<endl<<endl<< a << " - " << b << " = " << (a-b) << endl;
			break;
		case 3:
			cout << "MULTIPLICATION :"<<endl<<endl<< a << " * " << b << " = " << (a*b) << endl;
			break;
		case 4:
			try
			{
				if(b == 0)
				{
					throw b;
				}
				else
				{
					cout << "DIVISION :"<<endl<<endl<< a << " / " << b << " = " << (a/b) << endl;
				}
			}
			catch(int x)
			{
				cout << "Warning cannot divide a number by " << x << ". Please retry again."<<endl;
			}
			
			break;
		case 5:
			try
			{
				if(b == 0)
				{
					throw b;
				}
				else
				{
					cout << "MODULO :"<<endl<<endl<< a << " % " << b << " = " << (a%b) << endl;
				}
			}
			catch(int x)
			{
				cout << "Warning cannot perform modulo for " << x << ". Please retry again."<<endl;
			}
			
			break;
		default:
			cout << "Invalid number . Please select a number from the menu"<<endl;

	}
	
	
	
	return 0;
}
