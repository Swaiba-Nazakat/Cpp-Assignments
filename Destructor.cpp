//Destructor: Deallocates memory, no need to call (automatically called when object goes out of scope), if we don't create destructor, compiler automatically creates it.
//User defined destructor is required to delete a dynamically allocated memory, statically allocated memory is deleted by default destructor. 
//Destructor prevents memory leak.
#include <iostream>
#include <string.h>
using namespace std;
class Student {
	public:
		string name;
		int* ageptr;
	Student (string name, int age)
	{
		this->name=name;
		ageptr=new int (age);    //dynamically allocated memory using "new" keyword.
	}
	~Student ()
	{
		cout<<"Hey! I am a destructor.";
		delete ageptr;    //deallocated memory pointed by pointer "ageptr" using "delete" keyword. Note that pointer remains survived, only the memory to which it is directing deallocates.
	}
	void Info (){
		cout<<"Name : "<<name<<endl<<"Age : "<<*ageptr<<endl;
	}
};
int main (){
	Student s1 ("Swaiba", 20);
	s1.Info();
}
