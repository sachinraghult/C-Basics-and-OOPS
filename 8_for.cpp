#include <iostream>
using namespace std;

int main()
{
	int height,width;
	
	cout << "Let's draw a quadrilateral!"<<endl<<endl;
	
	cout << "Enter the height of quadrilateral to be drawn :  ";
	cin >> height;
	cout << endl;
	
	cout << "Enter the width of quadrilateral to be drawn :  ";
	cin >> width;
	cout << endl;
	
	cout << "Here we go......\n\n\n";
	
	for(int i=1;i<=height;i++)
	{
		for(int j=1;j<=width;j++)
		{
			if((i == 1 || i == height) && (j == 1 || j == width))
			{
				cout << "+";
			}
			else if(j == 1 || j == width)
			{
				cout << "|";
			}
			else
			{
				cout << "---";
			}
		}
		cout << endl;
	}
	
	cout << "\n\nDid you like it!" << endl;
	
	return 0;
}
