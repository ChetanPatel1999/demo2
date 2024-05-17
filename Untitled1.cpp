//template fuction
// if matching parameter fuction in program so frist priority take this fuction.
#include<iostream>
using namespace std;
template<class T>
void display(T a)
{
	cout<<"val of a = "<<a<<endl;
}
void display(int a)
{
	cout<<"same prameter int"<<endl;
	cout<<"val of a = "<<a<<endl;
}
int main()
{
 
 display(12);
 display(12.67);
 
 
 
 
 
}

