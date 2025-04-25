//SHALLOW COPY: A shallow copy of an object copies all the member values from one object to another. Normally shallow copy is created when we have to staticaly allocate the memory in STACK.
//Copy constructor is an example of shallow copy.
//
//DEEP COPY: A deep copies on the other hand, not only copies the member values but also makes copies of any dynamically allocated memory that the member points to. Memory is allocated
//dynamically in HEAP using the "new" keyword. HEAP is a special memory location that is allocated during RUNTIME. Normally, memory is allocated during COMPILE-TIME in stack.

#include <iostream>
#include <string.h>
using namespace std;
class Student {
	private :
		string phone;
		float cgpa;
	public:
		string name;
		int semester;
		string subject;
		int age; 
		
	Student (string name)
	{
		this->name = name;
	}
	
	void sameInfo()
	{
		semester = 1;
		subject = "Programming Fundamentals";
	}
		
	void setInfo (string p, float c)
	{
		phone = p;
		cgpa = c;
	}
	
	void getInfo ()
	{
		cout<<"Phone number is : "<<phone<<endl;
		cout<<"CGPA is : "<<cgpa<<endl<<endl;
	}
	
	void display()
	{
		cout<<"Name of student is : "<<name<<endl;
		cout<<"Current semester is : "<<semester<<endl;
		cout<<"Subject is : "<<subject<<endl;
	}
};

int main ()
{
	Student* ptr1=new Student ("Swaiba");  //Dynamic allocation as pointer object is used instead of declaring any normal object
	ptr1->sameInfo ();
	ptr1->setInfo ("0337-9709399", 4);
	ptr1->display ();
	ptr1->getInfo ();
	
//	Student s2 ("Saadia");
//	s2.sameInfo();
//	s2.setInfo("0311-511709", 4.1);
//	s2.age=45;
//	s2.display();
//	cout<<"Age of student is : "<<s2.age<<endl;
//	s2.getInfo();
}
