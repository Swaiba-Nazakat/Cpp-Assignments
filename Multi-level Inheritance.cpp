#include <iostream>
#include <string.h>
using namespace std;
class Person {     //parent class
	public:
		string name;
Person (string name){
	this->name=name;
}
};
class Student : public Person{    //child class that inherits properties of parent class.
	public:
	int age;
Student (string name, int age): Person (name){
	this->age=age;
}
};  
class Gradst : public Student {   //2nd child class that inherits properties of both parent and child class class.
	public:
	string research;
	
Gradst (string name, int age, string research):Student (name, age){
	this->research=research;
}

void display (){
		cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl<<"Research Area : "<<research<<endl;
}
};

int main ()
{
	Gradst s1 ("Swaiba", 20, "Artificial Intelligence");
	s1.display();
}
