#include <iostream>
using namespace std;

class Shape{
	
	public:
		virtual void getArea() = 0;
};

class Circle : public Shape{
	
	public:
		void getArea()
		{
			int r;
			cout << "Enter Circle radius :" << endl;
			cin >> r;
			cout << "Area of Circle is " << (3.14 * r * r) << endl << endl;
		}
};

class Rectangle : public Shape{
	
	public:
		void getArea()
		{
			int l, b;
			cout << "Enter length and breadth :" << endl;
			cin >> l >> b;
			cout << "Area of rectangle is " << l * b << endl;
		}
};

int main()
{
	Circle C;
	C.getArea();
	
	Rectangle R;
	R.getArea();
	
	return 0;
}
