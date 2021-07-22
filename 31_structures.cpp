#include <iostream>
#include <string>
using namespace std;

struct person
{
	string name;
	int age;
	double salary;
};

int main()
{
	person obj;
	
	cout << "Enter the person details : \n" << endl;
	
	cout << "Name : ";
	cin >> obj.name;
	
	cout << "Age : ";
	cin >> obj.age;
	
	cout << "Salary : ";
	cin >> obj.salary;
	
	cout << "\nMr." << obj.name << " of age " << obj.age << " gets an income of " << obj.salary << " per month";
	
	return 0;
}
