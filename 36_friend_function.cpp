#include <iostream>
using namespace std;

class Distance
{
	private:
		
		double miles;
		double kilometers;
		
	public:
		
		Distance(double m)
		{
			miles = m;
		}
		
		void displayData()
		{
			cout << "\nFORMULA :  kilometers = miles * 1.6\n\nTherefore " << miles << " miles is " << kilometers << " km" << endl;
		}
		
		friend void convert(Distance &d);
};

void convert(Distance &d)
{
	d.kilometers = d.miles * 1.6;
}

int main(Distance &d)
{
	double mile;
	
	cout << "Enter the distance in miles to convert into km : ";
	cin >> mile;
	
	Distance D(mile);
	
	convert(D);
	
	D.displayData();
	
	return 0;
}
