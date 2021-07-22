#include <iostream>
using namespace std;

class MyBase{
	
	private:
		int x;
	protected:
		int y;
	public:
		int z;
		
	MyBase()
	{
		x = 1;
		y = 2;
		z = 3;
	}
	
	void print()
	{
		cout << "X : " << x << endl;
		cout << "Y : " << y << endl;
		cout << "Z : " << z << endl << endl;
	}
};

class MyDerived1 : public MyBase{
	
	public:
		
		MyDerived1()
		{
			y = 4;
			z = 5;
		}
		
		void print1()
		{
			cout << "Variable x is private and cannot be accessed by Inherited class" << endl;
		}
		
};

class MyDerived2 : protected MyBase{
	
	public:
	
		MyDerived2()
		{
			y = 6;
			z = 7;
		}

		void print2()
		{
			cout << "Print() function is also inaccessible along with private var x by this inherited class as it is done by protected way" << endl;
			cout << "Y : " << y << endl;
			cout << "Z : " << z << endl;
		}

};

int main()
{
	MyBase B;
	cout << "BASE CLASS\n" << endl;
	B.print();
	
	MyDerived1 D1;
	cout << "1st DERIVED CLASS :: PUBLIC\n" << endl;
	D1.print1();
	D1.print();	

	MyDerived2 D2;
	cout << "2nd DERIVED CLASS :: PROTECTED\n" << endl;
	D2.print2();
	
	return 0;
}
