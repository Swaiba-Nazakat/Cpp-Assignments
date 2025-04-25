#include <iostream>
#include <string.h>
using namespace std;
class Parent {
	public:
	void show (){   //show() for parent class
		cout<<"Hey! I am function for parent class."<<endl;
	}
};

class Child:public Parent {
	public:
	void show (){    //show() for child class
		cout<<"Hey! I am function for child class."<<endl;
	}
};

int main()
{
	Child c1;
	c1.show();    //c1 overrides show () for p1
	cout<<endl;
	Parent p1;
	p1.show();
}

//Function overriding is a practical implementation of runtime polymorphism in which functions with the same name are declared in parent and child class 
//and child class overrides the function of parent class (in child class, function of its own is prioritized rather than function of parent class).
