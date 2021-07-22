#include <iostream>
using namespace std;

int main(){
	
	int enteredNum,luckyNum;
	
	cout << "Lets find your luck in chosing your favourite IPL team guys"<<endl<<endl;
	cout << "Rules:\n1.Enter any positive number\n2.Try only once"<<endl<<endl;
	
	cout << "Now it's your turn to enter a positive number :  ";
	cin >> enteredNum;
	cout << "\n.\n.\n.\n.\n.\n.\n.\n";
	
	luckyNum = enteredNum % 9;
	
	if(luckyNum == 0)
	{
		luckyNum = 1;
	}
	
	switch(luckyNum)
	{
		case 1:
			cout << "DELHI CAPITALS"<<endl;
			break;
		case 2:
			cout << "SUNRISES HYDERABAD"<<endl;
			break;
		case 3:
			cout << "RAJASTAN ROYALS"<<endl;
			break;
		case 4:
			cout << "KOLKATA KNIGHT RIDERS"<<endl;
			break;
		case 5:
			cout << "CHENNAI SUPER KINGS"<<endl;
			break;
		case 6:
			cout << "ROYAL CHALLENGES BANGALORE"<<endl;
			break;
		case 7:
			cout << "MUMBAI INDIANS"<<endl;
			break;
		case 8:
			cout << "KINGS X1 PUNJAB"<<endl;
			break;						
	}
	
	cout << "\nHow was that!"<<endl;
	
	return 0;
}
