#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	int x=10;
	string food="Pizza";
	cout<<&x<<"	  "<<&food<<endl<<endl;   //& operator directs the address of the particular variable.
	
	int* ptr1=&x;     //Pointers are the variables that are used to store the address of any other variable.
	string* ptr2=&food;
	cout<<ptr1<<"	"<<ptr2<<endl<<endl; 
	
	cout<<*ptr1<<"	"<<*ptr2<<endl<<endl;    //Dereference operator (*) directs the value stored at the address pointer.
	
	cout<<*(&x)<<"	"<<*(&food)<<endl<<endl;   //Dereference operator can also be used directly with address of variable without creating a pointer variable.
	
	cout<<&ptr1<<"	"<<&ptr2<<endl<<endl;    //& with the pointer variable directs address of the pointer variable.
	
	int** ptoptr1=&ptr1;     //ptoptr1 is pointer to pointer variable that sirects to the address of ptr1. SYNTAX: data_type of pointer** identifier= &pointer.
	string** ptoptr2=&ptr2; 
	
	cout<<ptoptr1<<"  "<<ptoptr2<<endl<<endl;  //Adress of pointer variable.
	
	cout<<*ptoptr1<<"	"<<*ptoptr2<<endl<<endl;   //Values stored at pointer variables (address of normal variables)
	
	cout<<**ptoptr1<<"	"<<**ptoptr2<<endl<<endl;    //Double dereference operator points to the value of initial variable (x and food).
	}

