#include <iostream>
#include <string.h>
using namespace std;
class Student {   //parent class
	public:
	string name;
	int age;
Student (string name, int age)
{
	this->name=name;
	this->age=age;
}
};

class Teacher {    //parent class 2
	public:
	string subject;
	double salary;
Teacher (string subject, double salary)
{
	this->subject=subject;
	this->salary=salary;
}
};
 
class TA : public Student, public Teacher {    //child class that inherits properties of both parent classes.
	public:
	string id;
	
TA (string name, int age, string subject, double salary, string id) : Student (name, age), Teacher (subject, salary)
{
	this->id=id;
}
};
 int main ()
 {
 	TA t1 ("Swaiba", 20, "AI", 23000, "abc-1234");
 	cout<<t1.name<<endl<<t1.age<<endl<<t1.subject<<endl<<t1.salary<<endl<<t1.id;
 }
