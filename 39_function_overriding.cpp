#include <iostream>
using namespace std;

class Animal{
	
	public:
		void makesound()
		{
			cout << "Animal makes sound" << endl;
		}
};

class Dog : public Animal{
	
	public:
		void makesound()
		{
			cout << "Dog barks" << endl;
		}
};

class Cat : public Animal{
	
	public:
		void makesound()
		{
			cout << "Cat meows" << endl;
		}
};

int main()
{
	Animal A;
	A.makesound();
	
	Dog D;
	D.makesound();
	
	Cat C;
	C.makesound();
	
	return 0;
}
