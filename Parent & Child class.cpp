#include <iostream>
using namespace std;
class Person {
	public:
	string name;
	int age;
	
Person (string name, int age)  //Constructor for parent
{
	this->name=name;
	this->age=age;
}
};
class Student : public Person {
	public:
		string roll_no;
Student (string name, int age, string roll_no) : Person (name, age)
{
	this->roll_no=roll_no;
}
void getInfo ()
{
	cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl<<"Roll number : "<<roll_no<<endl;
}
};
int main ()
{
	Student s1 ("Swaiba", 20, "BA1242009");
	s1.getInfo();
}
