#include <iostream>
#include <string.h>
using namespace std;
class Teacher {
	private:
		double salary;
	public:
		string name;
		string dept;
		string subject;
		int code;
	
	string change_dept (string new_dept)
	{
		dept=new_dept;
	}
	
	void setsalary (double salary)   //SETTER (private attribute but can be set through this constructor)
	{
		this->salary=salary;
	}
	
	void getsalary ()      //GETTER (displays/gets output for attribute)
	{
		cout<<"Salary is : "<<salary;
	}
	
	Teacher (string n, string d, string s, int c)
	{
		name=n, dept=d, subject=s, code=c;
	}
	void getInfo ()   //function to diplay output 
	{
		cout<<"Name is : "<<name<<endl;
		cout<<"Department is : "<<dept<<endl;
		cout<<"Subject is : "<<subject<<endl;
		cout<<"Code is : "<<code<<endl;
	}
};

int main ()
{
	Teacher t1("Swaiba", "Computer Science", "Artificial Intelligence", 399);
	t1.setsalary (50000.768);  //call for setter
	string change_dept ("Cyber Security");
	t1.getInfo ();   //call to fuction that displays info
	t1.getsalary (); //call for getter
}
