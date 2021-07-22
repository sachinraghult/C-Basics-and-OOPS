#include <iostream>
using namespace std;

int main()
{
	int size;
	
	cout << "Enter the size of array to perform addition operation on two arrays :\n " << endl;
	cin >> size;
	
	int arr1[size],arr2[size],arr[size];
	
	cout << "\nEnter the inputs for first array :\n " << endl;
	
	for(int i = 0;i < size;i++)
	{
		cin >> arr1[i];
	}
	
	cout << "\nEnter the inputs for second array :\n " << endl;
	
	for(int i = 0;i < size;i++)
	{
		cin >> arr2[i];
	}
	
	for(int i = 0;i < size;i++)
	{
		arr[i] = arr1[i] + arr2[i];
	}
	
	cout << "\nThe addition of two arrays are : " << endl << endl;
	
	for(int i = 0;i < size;i++)
	{
		cout << arr[i] << endl;
	}
	
	return 0;
}
