#include<iostream>
#include<string>
using namespace std;

class teacher{
	public:
	string name;
	string dept;
	string subject;
	double salary;
	
//	void changedept(string newdept){
	//	dept=newdept;
	
	
};
class student{
	public:
		string name;
		string dept;
		string subject;
};
int main(){
teacher t1;
t1.name="imran";
cout<<t1.name<<endl;
t1.dept="it"; 
cout<<t1.dept<<endl;
t1.subject="cout<<endl;
student s1;
cout<<"this is the data of new student"<<endl;
s1.name="sheroze";
s1.dept="zology";
s1.subject="pakistan";
cout<<s1.name<<endl;
cout<<s1.dept<<endl;
cout<<s1.subject<<endl;
return 0;
	
}