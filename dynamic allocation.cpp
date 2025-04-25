#include <iostream>
using namespace std;
int main ()
{
	int* ptr=new int (100);      //pointer without an initial variable, deep copy.
	cout<<*ptr;
}
