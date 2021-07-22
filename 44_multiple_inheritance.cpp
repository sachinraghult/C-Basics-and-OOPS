#include <iostream>
using namespace std;

class A{
	
	public:
		void printmessage()
		{
			cout << "Class A printmessage function" << endl;
		}
};

class B{
	
	public:
		void printmessage()
		{
			cout << "Class B printmessage function" << endl;
		}
};

class AB : public A, public B{
	
	public:
		void printmessage()
		{
			A::printmessage();
			B::printmessage();
			cout << "Class AB printmessage function" << endl;
		}
};


int main()
{
	AB objAB;
	objAB.printmessage();
}
