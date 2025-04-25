#include <iostream>
using namespace std;
class Print{
	public:
	void show(int x)
	{
		cout<<"Integer : "<<x<<endl;
	}
	void show(char ch)
	{
		cout<<"Character : "<<ch<<endl;
	}
};

int main ()
{
	Print p1;
	p1.show(101);
	p1.show('#');
}

//Polymorphism is ability of objects to take on different forms or behave in different ways depending ON THE CONTEXT in which they are used.

//Function overloading, constructor overloading or operator overloading is a practical implementation of compile time polymorphism in which two or more functions
//(constructors) with the same name are declared but they only differ in number or types or arrangement of parameters.

//In case of operator overloading, we may say that the same operator "=" can be used to assign value to integer or assign value to string.

