#include <iostream>
using namespace std;

int main()
{
	int size;
	
	cout << "Enter the size of the array to allocate memory dynamically : " << endl;
	cin >> size;
	
	int *ptr;
	ptr = new int[size];
	
	cout << "Enter the input for the array : " << endl;
	
	for(int i = 0;i < size;i++)
	{
		cin >> ptr[i];
	}
	
	cout << "The given numbers are : " << endl;
	
	for(int i = 0;i < size;i++)
	{
		cout << ptr[i] << endl;
	}
	
	return 0;
}
