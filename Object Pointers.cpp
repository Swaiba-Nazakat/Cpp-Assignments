#include <iostream>
#include <string.h>
using namespace std;
class student {
	private:
		float marks;
	public:
		string name;
		int roll_no;
		int age;
	
	void setmarks (float mar)
	{
		marks = mar;
		cout<<"Marks of student are : "<<marks<<endl;
	}
	
	student (string name, int roll_no, int age)
	{
		this->name=name;
		this->roll_no=roll_no;
		this->age=age;
	}
	
	void change (student &s)     //changes values of roll_number by reference
	{
		s.roll_no=123;
		cout<<"Changed roll number is : "<<roll_no;
	}
	
	void display()
	{
		cout<<"Name of student is : "<<name<<endl;
		cout<<"Roll number is : "<<roll_no<<endl;
		cout<<"Age is : "<<age<<endl;
	}
};

int main ()
{
	student s1 ("Momina Kachra", 7, 115);
	s1.change (s1);
    s1.display();
	s1.setmarks(0.0);
	s1.change(s1);
	
	cout<<endl<<endl;
	
	student* ptr=&s1;
	(*ptr).name="Areeba Kachra";   //can also be written as ptr->name="Areeba Kachra"; 
	ptr->roll_no=2009;    // a->b  is same as  (*a).b  (here "a" must be a pointer variable.)
	(*ptr).age=117;
	s1.display();
	s1.setmarks(0.0);
	(*ptr).change(*ptr); 
	
	cout<<endl<<endl;
	
	student* s3=new student ("Swaiba", 2009, 20);     //easiest way for assigning values to object pointers. 
	(*s3).display();
	
}
