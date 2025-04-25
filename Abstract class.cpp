#include <iostream>
using namespace std;
class Shape {
	public:
		virtual void draw()=0;   //PURE VIRTUAL FUNCTION: virtual function assigned value of 0. A class containing pure virtual function automatically becomes abstract class.
		// Abstract class is only created for the process of inheritance and it can not be instantiated (we can't create any object of it)
};

class Circle : public Shape {
	public:
	void draw ()
	{
		cout<<"Draw a circle!"<<endl;
		
	}
};

class Square : public Shape {
	public:
	void draw ()        //function overriding
	{
		cout<<"Draw a square!"<<endl;
		
	}
};

int main ()
{
	Circle c1;
	c1.draw();
	cout<<endl;
	Square s1;
	s1.draw();
	cout<<endl;
}
