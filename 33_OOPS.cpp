#include <iostream>
#include <string>
using namespace std;

class Cars{
	
	private:
		
		string company;
		string model;
		string fuel;
		double mileage;
		double price;
		
	public:
		
		void setData(string company1, string model1, string fuel1, double mileage1, double price1)
		{
			company = company1;
			model = model1;
			fuel = fuel1;
			mileage = mileage1;
			price = price1;
		}
	
		void displayData()
		{
			cout << "The details of the car as below : \n" << endl;
			cout << "Car company : " << company << endl;
			cout << "Car model : " << model << endl;
			cout << "Car fuel : " << fuel << endl;
			cout << "Car mileage : " << mileage << " km/L" << endl;
			cout << "Car price : " << price << " Rs" << endl;
		}
	
};

int main()
{
	Cars carObj;
	
	carObj.setData("Benz", "B100", "Diesel", 25.5, 500000);
	carObj.displayData();
	
	return 0;
}
