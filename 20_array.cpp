#include <iostream>
using namespace std;

int main()
{
	int size;
	
	cout << "Enter the number of input to be given : " << endl;
	cin >> size;
	
	int arr[size];
	
	cout << "Enter the inputs to display : " << endl;
	
	for(int i = 0;i < size;i++)
	{
		cin >> arr[i];
	}
	
	cout << "\nThe given numbers are : " << endl;
	
	for(int i = 0;i < size;i++)
	{
		cout << arr[i] << endl;
	}
	
	return 0;
}
