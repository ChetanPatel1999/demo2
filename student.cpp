// using costructor
#include<iostream>
using namespace std;
class student
{
	// data mebers` (propertice)
	string name;
	int rno;
	float per;
	// method (operation on this propertice)
	public:
	student(string s,int a, float b)
	{
	  name=s;
	  rno=a;
	  per=b;	
	}
	void printreportcard()
	{
	 cout<<"report card ............."<<endl;	
	 cout<<"name of student :"<<name<<endl;
	 cout<<"roll number of student :"<<rno<<endl;
	 cout<<"percentage of student : "<<per<<endl;
	 if(per>33)
	 {
	 	cout<<"student rusult : student pass "<<endl;
	 	cout<<"_______________________________________"<<endl;
	 }
	 else
	 {
	  	cout<<"student rusult : student fail "<<endl;
	 	cout<<"_______________________________________"<<endl;	
	 }
	}
};

int main()
{
  student s1("chetan",1001,90.89);
  student s2("ayush",1002,12.67);
  student s3("aman",1003,50.78);
  student s4("rohit",1004,32.56);
  s1.printreportcard();
  s2.printreportcard();
  s3.printreportcard();
  s4.printreportcard();
  
 return 0;	
 
 
 
}
