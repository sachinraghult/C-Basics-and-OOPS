#include <iostream>
using namespace std;

class A{
	
	protected:
		int val;
};

class AB : virtual public A{
	
	public:
		AB()
		{
			val = 1;
		}
};

class AC : virtual public A{
	
	public:
		AC()
		{
			val = 2;
		}
};
//The properties of only right most class of the hybrid class will be inherited
//Here the right most class that is class AB is inherited by hybrid class

class ABCD : public AC, public AB{  	
	
	public:
		void getData()
		{
			cout << "The value of val is " << val << endl;
		}
};

int main()
{
	ABCD objABCD;
	objABCD.getData();
}
