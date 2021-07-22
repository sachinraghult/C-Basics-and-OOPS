 #include <iostream>
 using namespace std;
 
 class myclass1{
 	private:
 		int x;
 	public:
 		myclass1(int a)
 		{
 			x = a;
		}
	friend class myclass2;	
 };
 
 class myclass2{
 	public:
 		void showData(myclass1 obj)
 		{
 			cout << "X value is " << obj.x;	
		}
 };
 
 int main()
 {
 	myclass1 obj1(4);
 	myclass2 obj2;
 	obj2 .showData(obj1);
 }
