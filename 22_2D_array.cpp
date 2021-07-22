#include <iostream>
using namespace std;

int main()
{
	int size;
	
	cout << "Enter the size of the arrays to perform addition operation : \n" << endl;
	cin >> size;
	
	int arr[size][size],arr1[size][size],arr2[size][size];
	
	cout << "\nEnter the input for the first array : \n" << endl;
	
	for(int i = 0;i < size;i++)
	{
		for(int j = 0;j < size;j++)
		{
			cin >> arr1[i][j];
		}
	}
	
	cout << "\nEnter the input for the second array : \n" << endl;
	
	for(int i = 0;i < size;i++)
	{
		for(int j = 0;j < size;j++)
		{
			cin >> arr2[i][j];
		}
	}
	
	for(int i = 0;i < size;i++)
	{
		for(int j = 0;j < size;j++)
		{
			arr[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	cout << "\nAddition of two given arrays is : \n" << endl;
	
	for(int i = 0;i < size;i++)
	{
		for(int j = 0;j < size;j++)
		{
			cout << arr[i][j] << "     ";
		}
		cout << endl;
	}
	
	return 0;
}
