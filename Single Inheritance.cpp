#include <iostream>
#include <string.h>
using namespace std;
class Person {    //Base, Super or Parent class
	public:
	string name;
	int age;

Person ()
{ 
	cout<<"I am the constructor for parent class."<<endl;   //parent class constructor is always called before child class constructor
}
~Person ()    
{
	cout<<"I am the destructor for parent class."<<endl;     //parent class destructor is always called after child class destructor
}};

class Student : public Person {    //Derived, Sub or Child class inheriting the properties of parent class
	public :
	string roll_no;
	Student (string name, int age, string roll_no)
	{
		this->name=name;
		this->age=age;
		this->roll_no=roll_no;
	}
	void getInfo ()
	{
		cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl<<"Roll number : "<<roll_no<<endl;
	}
Student ()
{	
	 cout<<"I am the constructor for child class."<<endl;     //will not be called by default as we have already created parameterized constructor that has taken its place.
}
~Student ()
{
	 cout<<"I am the destructor for child class."<<endl;     //called earlier than parent class destructor.
}};
int main ()
{
	Student s1 ("Swaiba", 20, "BAI242009");
	s1.getInfo();
}
