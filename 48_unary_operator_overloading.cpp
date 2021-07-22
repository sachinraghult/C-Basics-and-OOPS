#include <iostream>
using namespace std;

class Operation{
	
	private:
		int a;
		
	public:
		
		static int count;
		
		Operation()
		{
			count++ ;
			
			cout << "Enter the  number " << count << " : ";
			cin >> a;
		}
		
		int return_var()
		{
			return a;
		}
		
		Operation(int x)
		{
			a = x;
		}
		
		void print()
		{
			cout << "\nThe resultant is " << a << endl;
		}
		
		Operation operator +(Operation obj)
		{
			Operation temp(0);
			
			temp.a = a + obj.a;
			
			return temp;
		}
		
		Operation operator -(Operation obj)
		{
			Operation temp(0);
			
			temp.a = a - obj.a;
			
			return temp;
		}
		
		Operation operator *(Operation obj)
		{
			Operation temp(0);
			
			temp.a = a * obj.a;
			
			return temp;
		}
		
		Operation operator /(Operation obj)
		{
			Operation temp(0);
			
			temp.a = a / obj.a;
			
			return temp;
		}
		
		Operation operator ++()
		{
			Operation temp(0);
			
			temp.a = ++a;
			
			return temp;
		}
		
		Operation operator --()
		{
			Operation temp(0);
			
			temp.a = --a;
			
			return temp;
		}
		
		Operation operator ++(int)
		{
			Operation temp(0);
			
			temp.a = a++;
			
			return temp;
		}
		
		Operation operator --(int)
		{
			Operation temp(0);
			
			temp.a = a--;
			
			return temp;
		}
};

int Operation::count = 0;

int main()
{
	int choice;
	
	cout << "List of operations that can be performed:\n\n";
	cout << "     1.Addition\n     2.Subtraction\n     3.Multiplication\n     4.Division\n     5.Pre Increament\n     6.Post Increament\n";
	cout << "     7.Pre Decreament\n     8.Post Decreament\n" << endl;
	
	cout << "Enter the option number for which you need to perform the operation : ";
	cin >> choice;
	cout << endl;
	
	switch(choice)
	{
		case 1:
		{
			
			cout << "\nADDITION\n" << endl;	
			
			Operation number1, number2, result(0);
			
			result = number1 + number2;
			
			result.print();
			
			break;
		}
		case 2:
		{	
			cout << "\nSUBTRACTION\n" << endl;	
			
			Operation number1, number2, result(0);
			
			result = number1 - number2;
			
			result.print();
			
			break;
		}	
		case 3:
		{	
			cout << "\nMULTIPLICATION\n" << endl;	
			
			Operation number1, number2, result(0);
			
			result = number1 * number2;
			
			result.print();
			
			break;
		}	
		case 4:
		{	
			cout << "\nDIVISION\n" << endl;	
			
			Operation number1, number2, result(0);
		
			try
			{
			
				try
				{
					if(number2.return_var() != 0)
					{
						result = number1 / number2;
			
						result.print();
					}
					else
					{
						throw number1.return_var();
					}
				}
				
				catch(int numerator)
				{
					cout << "\nWARNING !!  The given number " << numerator << " cannot be divided by ";
					throw number2.return_var();
				}
				
			}
			catch(int denominator)
			{
				cout << denominator << endl;
			}
			
			break;
		}	
		case 5:
		{	
			cout << "\nPRE INCREAMENT\n" << endl;
			
			Operation number, result(0);
			
			result = ++number;
			
			result.print();
			
			break;
		}	
		case 6:
		{	
			cout << "\nPOST INCREAMENT\n" << endl;
			
			Operation number, result(0);
			
			result = number++;
	
			result.print();
	
			break;
		}	
		case 7:
		{	
			cout << "\nPRE DECREAMENT\n" << endl;
			
			Operation number, result(0);
			
			result = --number;
			
			result.print();
			
			break;
		}	
		case 8:
		{	
			cout << "\nPOST DECREAMENT\n" << endl;
			
			Operation number, result(0);
			
			result = number--;
			
			result.print();
			
			break;
		}
	}
	
	
	return 0;
}
