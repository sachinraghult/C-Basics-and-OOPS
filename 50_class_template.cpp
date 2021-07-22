#include <iostream>
using namespace std;

template <typename A, typename B>
class Weight
{
	private :
		A gram;
		B kg;
	public:
		void setData(A x, B y)
		{
			gram = x;
			kg = y;
		}
		B printData()
		{
			return kg;
		}
};

int main()
{
	Weight <int,float>obj1;
	obj1.setData(5000,5.34);
	cout << "Object 1 kg has " << obj1.printData() << endl;
	
	Weight <int,float>obj2;
	obj2.setData(800.34,834);
	cout << "Object 2 kg has " << obj2.printData() << endl;
}
