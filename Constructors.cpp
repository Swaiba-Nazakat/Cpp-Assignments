//CONSTRUCTORS: Special methods (functions) envoked automatically at the time of object creation. Always declared publically. Memory allocation happens when constructor is called.
//Name of constructor is same as name of class.
#include <iostream>
#include <string.h>
using namespace std;

//CLASS
	class Information {
		public:    //Access Modifier (Others are Private & Protected)
		string name;
		int age, roll_no;
		float cgpa;
		char gender;
		
//DEFAULT CONSTRUCTOR 
    //You can initialize multiple constructors in a class (CONSTRUCTOR OVERLOADING) but make sure when you call it for an object,
	//the arrangement of datatypes of parameters and arguments must be same.
	Information ()
	{
		
	}
	
//PARAMETARIZED CONSTRUCTOR (no return type. If declared, takes the place of default constructor)
	Information (string name,int age,int roll_no,float cgpa,char gender)
	{
		this->name = name;
		this->age = age;
		this->roll_no = roll_no;
		this->cgpa = cgpa;
		this->gender = gender;
	}
	
	void display()
	{
		cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl<<"Roll number : "<<roll_no<<endl<<"CGPA : "<<cgpa<<endl<<"Gender : "<<gender<<endl;
	}
	
	Information (int roll_no, string name, char gender)  //Constructor no. 2
	{
		this->roll_no=roll_no;
		this->name=name;
		this->gender=gender;
	}
};

		
//MAIN 	
	int main ()
	{

		Information mine ("Swaiba", 20, 2009, 4.4, 'F');   //Passed values to the parameterized constructor
		mine.display();
		
		Information amma;    //Default constructor automatically called
		amma.name="Saadia";
		amma.age=45;
		amma.roll_no=2008;
		amma.cgpa=5;
		amma.gender='F';
		cout<<amma.name<<endl<<amma.age<<endl<<amma.roll_no<<endl<<amma.cgpa<<endl<<amma.gender<<endl<<endl;
		
		Information abba (2007, "Nazakat", 'M');    //Passed values to constructor no. 2
		abba.cgpa=5.5;     //Values can also be assigned separately if not declared in constructor parameters.
		cout<<abba.roll_no<<endl<<abba.name<<endl<<abba.gender<<endl<<abba.cgpa;
	}      
