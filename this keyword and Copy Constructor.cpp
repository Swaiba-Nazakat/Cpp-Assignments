#include <iostream>
#include <string.h>
using namespace std;
class Player {
	private:
		int salary;
	public:
		string name;
		float number;
		
	void setsalary(int sal)
	{
		salary=sal;
	}
	void getsalary ()    
	{
		cout<<salary;
	}
	Player (string name, float number)
	{
		this->name=name;  //this->name is same as *(this).name (this is pointer variable for property)
		this->number=number;
	}
		void getInfo()
	{
		cout<<"Name of player is : "<<name<<endl;
		cout<<"Number is : "<<number<<endl;
		cout<<"Salary is : " ;
	}
};

int main ()
{
	Player p1("Babar Azam", 22.2);
	p1.setsalary(25000);
	p1.getInfo();
	p1.getsalary();
	cout<<endl<<endl;
	
	
	Player p2 (p1);  //COPY CONSTRUCTOR (passes value from one object to another)
	p2.getInfo();	
}
