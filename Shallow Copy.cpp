#include <iostream>
#include <string.h>
using namespace std;
class me {
	public:
	string name;
	int* age_ptr;   //making pointer to store in heap without declaring normal variable.
	me (string name, int age)     //second parameter is temporarily created variable to which our previously created pointer variable will point
	{
		this->name=name;
		age_ptr=new int;      //dynamically allocated memory to the pointer using "new" keyword.   
   		*age_ptr=age;      //pointer variable stores value of parameter, dynamically allocated memory is reserved.
   		//line 11 and 12 can also be written as, age_ptr=new int (age);
		}
	void display()
	{
		cout<<"My name is : "<<name<<endl;
		cout<<"My age is : "<<*age_ptr<<endl;          //as normal vaiable doesn't actually exists, so the value to be printed is that stored at the pointer variable ptr_age using 
		// "*" (dereference operator).
	}
};
int main () {
	cout<<"m1 DATA: "<<endl;
	me m1 ("Swaiba", 20);
	m1.display();
	
	cout<<endl; 
	
	cout<<"m2 DATA: "<<endl;
	me m2 (m1);
	m2.display();
	
	cout<<endl; 
	
	cout<<"m2 changed DATA: "<<endl;
	*(m2.age_ptr)=19;  //making changings in m2 age but we want m1 same
	m2.display();    
	
	cout<<endl;
	
	cout<<"m1 DATA (unwantedly changed): "<<endl;
	m1.display();  //However by changing m2 age, m1 age also changes unwantedly as the pointer "age_ptr" points to the same address and changes value at that address.	  
}
