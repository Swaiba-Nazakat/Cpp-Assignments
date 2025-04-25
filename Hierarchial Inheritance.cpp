#include <iostream>
#include <string.h>
using namespace std;
class Person {
	public:
	string name;
	int age;
	
Person (string name, int age)
{
	this->name=name;
	this->age=age;
}
};

class Student : public Person{
	public:
	int roll_no;
Student (string name, int age, int roll_no):Person (name, age)
{
	this->roll_no=roll_no;
}
void getInfo()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"Roll number : "<<roll_no;
}
};
class Teacher : public Person{
	public:
	int salary;
Teacher (string name, int age, int salary):Person (name, age)
{
	this->salary=salary;
}
void getInfo()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"Salary : "<<salary;
}
};
int main ()
{
	Teacher t1 ("Saadia", 45, 10000);
	Student s1 ("Swaiba", 20, 2009);
	t1.getInfo();
	cout<<endl<<endl;
	s1.getInfo();
}
