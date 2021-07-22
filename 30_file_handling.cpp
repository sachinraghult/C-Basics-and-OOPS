#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char writeVar[100];
	
	cout << "Enter your name and age : \n" << endl;
	cin.getline(writeVar,100);
	
	cout << "\nFILE WRITE OPERATION STARTED" << endl; 
	
	ofstream file("30_file_handling_text.txt",ios::app);
	file << writeVar;
	file.close();
	
	cout << "FILE WRITE OPERATION SUCCESSFULLY COMPLETED" << endl;
	
	char readVar[100];
	
	cout << "\nFILE READ OPERATION STARTED" << endl << endl;
	
	ifstream obj("30_file_handling_text.txt");
	obj.getline(readVar,100);
	cout << "The content of the text file is \n" << endl << readVar << endl << endl;
	obj.close();

	cout << "FILE READ OPERATION SUCCESSFULLY COMPLETED" << endl;
	
	return 0;
}
