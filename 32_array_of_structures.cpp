#include <iostream>
#include <string>
using namespace std;

struct Employees
{
	string name;
	int age;
	double salary;
};

int main()
{
	int size;
	
	cout << "Enter the number of employees that you need to store : ";
	cin >> size;
	
	Employees E[size];
	
	cout << "\nEnter the employee details as asked below : " << endl;
	
	for(int i = 0;i < size;i++)
	{
		cout << "\nEmployee " << i+1 << ":\n" << endl;
		
		cout << "Name :  ";
		cin >> E[i].name;
		
		cout << "Age :  ";
		cin >> E[i].age;
		
		cout << "Salary :  ";
		cin >> E[i].salary;
	}
	
	cout << "\nThe employees you appointed are : \n";
	
	for(int i = 0;i < size;i++)
	{
		cout << "\nEmployee " << i+1 << ":\n" << endl;
		
		cout << "Name :  " << E[i].name << endl;
		
		cout << "Age :  " << E[i].age << endl;
		
		cout << "Salary :  " << E[i].salary << endl;
	}
	
	return 0;
}
