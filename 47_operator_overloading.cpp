#include <iostream>
using namespace std;

class Complex{
	
	private:
		int real, imaginary;
		static int count;
		
	public:
		
		Complex()
		{
			count++;
		}
		
		Complex(int i, int r)
		{
			real = r;
			imaginary = i;
		}
		
		void setdata()
		{
			cout << "\nInput the real and imaginary part of the complex number " << " : "<< endl;
			cin >> real >> imaginary;
		}
		
		static int countFunc()
		{
			return count;
		}
		
		void print()
		{
			cout << "The sum of all complex numbers entered is " << real << " + " << imaginary << "i" << endl;
		}
		
		Complex operator +(Complex c)
		{
			Complex temp;
			
			temp.real = real + c.real;
			temp.imaginary = imaginary + c.imaginary;
			
			return temp;
		}
};

int Complex::count = 0;

int main()
{
	int size;
	
	cout << "Enter the number of complex numbers to perform addition : ";
	cin >> size;

	Complex C[size];
	
	cout << "\nThus " << Complex::countFunc() << " objects are successfully created" << endl;
	
	for(int i=0;i<size;i++)
	{
		C[i].setdata();
	}
	
	Complex Comp(0,0);


	for(int i=0;i<size;i++)
	{
		Comp = Comp + C[i];
	}
	
	Comp.print();
}
