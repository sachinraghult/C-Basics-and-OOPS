#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	int tablesNum,tablesSize;
	
	cout << "Welcome to the Mathematcical world !!"<<endl<<endl;
	
	cout << "Enter the number for which you need the mathematical table : ";
	cin >> tablesNum;
	cout <<endl;
	
	cout << "Enter the required table size that helps you : ";
	cin >> tablesSize;
	cout <<endl;
	
	cout << "Here we go\n.\n.\n.\n.\n\n";
	
	while(i <= tablesSize)
	{
		cout << tablesNum << " x " << i << " = " << (tablesNum * i) << endl;
		i++;
	}
	
	cout << "\n\nWas it helpful buddy!" << endl;
	
	return 0;
}
