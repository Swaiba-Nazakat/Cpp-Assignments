#include <iostream>
using namespace std;
template <class T>
void sum(T a, T b){
	double sum=a+b;
	cout<<"Sum of numbers is : "<<sum;
}
int main ()
{
	float x=2.2;
	float y=1.1;
	int z=3;
	sum(x,y);
}
