#include <iostream>
#include <string.h>
using namespace std;
class Student {
	public:
	string name;
	int age;
	string roll_number;
	
inline Student (string n, int a, string r) : name(n), age(a), roll_number(r)
{
	
}
void display ()
{
	cout<<"Name : "<<name<<", Age : "<<age<<", Roll Number : "<<roll_number;
}
};

int main ()
{
	Student s1 ("Swaiba", 20, "2009");
	s1.display();
}
