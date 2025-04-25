#include <iostream>
#include <string.h>
using namespace std;
class Person {
	private:
		int salary;
	public:
		string name;
		int age;
		static string dep;
void set(int salary)   //setter
{
	this->salary = salary;
}
void get()   //getter
{
	cout<<"Salary is : "<<salary;
}
Person (string name, int age)    //constructor
{
	this->name=name;
	this->age=age;
}
void display ()    //display function
{
	cout<<"Name is : "<<name<<endl<<"Age is : "<<age<<endl;
}
static func (){   //Static function can only access static variables
	cout<<"Department is : "<<dep<<endl;
}
};
string Person::dep="CS";
int main(){
	Person::func();   //Object creation isn't required to call static function 
	Person p1 ("Swaiba", 20);
	p1.set(234567);
	p1.display();
	p1.get();
	}




