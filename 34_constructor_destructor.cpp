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
		
		Cars()
		{
			cout << "DEFAULT CONSTRUCTOR" << endl << endl;
		}
		
		Cars(string company1, string model1, string fuel1, double mileage1, double price1)
		{
			
			cout << "\nPARAMETERISED CONSTRUCTOR" << endl << endl;
			
			company = company1;
			model = model1;
			fuel = fuel1;
			mileage = mileage1;
			price = price1;
		}
		
		Cars(Cars &obj)
		{
			
			cout << "\nCOPY CONSTRUCTOR" << endl << endl;
			
			company = "BMW";
			model = obj.model;
			fuel = obj.fuel;
			mileage = obj.mileage;
			price = 20000000;
		}
		
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
		
		~Cars()
		{
			cout << "\nDESTRUCTOR of " << company << endl;
		}
//If object A,B,C are created then the constructor are called in the order of A,B,C but the destructors are in the reverse order of C,B,A
};

int main()
{
	Cars car1;
	
	car1.setData("Benz", "B100", "Diesel", 25.5, 5000000);
	car1.displayData();
	
	Cars car2("Ferarri", "F101", "Petrol", 20.5, 10000000);
	
	car2.displayData();
	
	Cars car3 = car1;
	
	car3.displayData();
	
	return 0;
}
