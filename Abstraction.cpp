#include <iostream>
#include <string.h>
using namespace std;
 class Person {
	public:
	string name;
	int age;
	virtual void display ()=0;	
	
Person (string name, int age)
{
	this->name=name;
	this->age=age;
}
};

class Student : public Person{
	public:
	double fees;
	
Student (string name, int age, double fees): Person (name, age){
	this->name=name;
	this->age-age;
	this->fees=fees;
}
void display (){
	cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl<<"Fee : "<<fees;
}
};

class Teacher : public Person{
	public:
	double salary;
Teacher (string name, int age, double salary): Person(name, age){
	this->name=name;
	this->age=age;
	this->salary=salary;
}
void display (){
	cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl<<"Salary : "<<salary;
}
};

int main () {
	Student s1 ("Swaiba", 20, 100000.234);
	Teacher t1 ("Saadia", 45, 200000.468);
	s1.display();
	cout<<endl<<endl;
	t1.display();
}

