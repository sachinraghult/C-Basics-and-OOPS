#include <iostream>
using namespace std;

class Base{
	
	public:
		virtual void print()
		{
			cout << "Base class Print function" << endl;
		}
		
		void show()
		{
			cout << "Base class Show function" << endl;
		}
};

class Derived : public Base{
	
	public:
		void print()
		{
			cout << "Derived class Print function" << endl;
		}
		
		void show()
		{
			cout << "Derived class Show function" << endl;
		}
};

int main()
{
	Base *B;
	Derived D;
	
	B = &D;
	
	B->print();
	B->show();
	
	return 0;
}
