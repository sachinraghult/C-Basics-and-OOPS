#include <iostream>
using namespace std;

class MyBase{
	
	private:
		
		int x;
		static int count;  //Static data member is to create only one copy of the variable even if many objects are created
		
	public:
		
		MyBase()
		{
			count++;
		}
		
		static int getcount()
		{
			return count;
		}
};
//static data initialisation should be done outside as below
int MyBase::count = 0;

int main()
{
	int size;
	
	cout << "Enter the number of objects need to be initialized : ";
	cin >> size;
	
	MyBase obj[size];
	
	//The main use of static data members and functions is to know the count of objects
	
	cout << "\nThe number of objects created are " << MyBase::getcount() << endl;
}
