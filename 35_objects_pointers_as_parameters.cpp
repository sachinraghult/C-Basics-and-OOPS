#include<iostream>
using namespace std;

class ComplexNumber{
	
	private:
		
		int real;
		int imaginary;
	
	public:
		
		ComplexNumber()
		{
		}
		
		ComplexNumber(int r, int i)
		{
			real = r;
			imaginary = i;
		}
		
		int realFunction()
		{
			return real;
		}
		
		int imaginaryFunction()
		{
			return imaginary;
		}
	
		void displayData()
		{
			cout << "Complex Number is " << real << " + " << imaginary << "i" << endl;
		}
	
};

ComplexNumber add(ComplexNumber c1, ComplexNumber c2)
{
	int real, imaginary;
	
	real = c1.realFunction() + c2.realFunction();
	imaginary = c1.imaginaryFunction() + c2.imaginaryFunction();
	
	ComplexNumber temp(real, imaginary);
	
	return temp;
}

int main()
{
	ComplexNumber comp1(2,4), comp2(6,8), comp3;
	
	comp1.displayData();
	comp2.displayData();
	
	comp3 = add(comp1, comp2);
	
	cout << "\nAddition of above two Complex Number results : \n" << endl;

	comp3.displayData();
	
	return 0;
}
