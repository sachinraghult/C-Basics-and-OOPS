#include <iostream>
using namespace std;

class Area
{
	protected:
		
		double breadth;
		double length;
		
	public:
		
		void setArea(double b, double l)
		{
			breadth = b;
			length = l;
		}
		
};

class Rectangle : public Area
{
	public:
		
		void displayArea()
		{
			cout << "Area of the rectangle of sides " << breadth << " and " << length << " is " << (breadth * length) << endl;
		}
		
};

int main()
{
	double width, height;
	
	cout << "Enter width and height of rectangle to calculate the area : \n";
	cin >> width >> height;
	
	Rectangle R;
	
	R.setArea(width, height);
	R.displayArea();
	
	return 0;
}
