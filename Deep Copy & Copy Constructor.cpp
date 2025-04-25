#include <iostream>
#include <string.h>
using namespace std;
class me {
	public:
	string name;
	int* age_ptr;   
	me (string name, int age)     
	{
		this->name=name;
		age_ptr=new int;        
   		*age_ptr=age;    
		}
	void display()
	{
		cout<<"My name is : "<<name<<endl;
		cout<<"My age is : "<<*age_ptr<<endl;      
	} 
	me (me &obj)     //COPY CONSTRUCTOR
	{
		this->name=obj.name;
		this->age_ptr=new int (*obj.age_ptr);       //Individual memory is allocated to each pointer pointing age for each individual object (DEEP COPY). 
	}
};
int main () {
	cout<<"m1 DATA: "<<endl;
	me m1 ("Swaiba", 20);
	m1.display();
	
	cout<<endl<<"m2 DATA: "<<endl;
	me m2 (m1);
	m2.display();
	
	cout<<endl<<"m2 changed DATA: "<<endl;
	*(m2.age_ptr)=45;  
	m2.display();    
	
	cout<<endl<<"m1 DATA (no unwanted change): "<<endl;
	m1.display(); 
	
	cout<<endl<<"New values for m2 : "<<endl;
	m2.name="Saadia";
	m2.display();   
}
