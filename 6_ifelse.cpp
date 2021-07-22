#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age;
	string country;
	
	cout << "Eligibility to vote: "<<endl;
	
	cout << "Enter your country (India / America) : ";
	cin >> country;
	cout << "Enter your age : ";
	cin >> age;
	
	if(country == "India")
	{
		if(age >= 18)
		{
			cout << "You are eligible to vote"<<endl;
		}
		else
		{
			cout << "You are not eligible to vote"<<endl;
		}
	}
	else if(country == "America")
	{
		if(age >= 15)
		{
			cout << "You are eligible to vote"<<endl;
		}
		else
		{
			cout << "You are not eligible to vote"<<endl;
		}
	}
	else
	{
		cout << "Sorry we are not sure about your eligibility to vote"<<endl;
	}
	
	return 0;
}
