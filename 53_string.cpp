#include <iostream>
#include <string>      //string liblary contains many of the string function
using namespace std;

int main()
{
	string name;
	cout << "Enter the name :" << endl;
	getline(cin,name);   //getline function is used to get the whole string instead of the breaked string because of blank spaces
	
	cout << "The name given is " << name << " and the given name has a length of " << name.length();   
	
	//length() function is one of the examples of many functions that string library contains
	
	/*Some of them are :
	strcpy(str1,str2);
	strcat(str1,str2);
	strlen(str1);
	strcmp(str1,str2);
	etc..*/
	
	return 0;
}
