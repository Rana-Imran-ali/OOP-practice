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
class employee {
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
t1.subject="computer";
cout<<t1.subject<<endl;
student s1;
s1.name="Mirza Ali Murtaza";
s1.dept="I.T";
s1.subject="Networking";
cout<<s1.name<<endl;
cout<<s1.dept<<endl;
cout<<s1.subject<<endl;
employee e1;
e1.name ="muzamil";
e1.dept="political science";
e1.subject="science";
cout<<e1.name<<endl;
cout<<e1.dept<<endl;
cout<<e1.subject<<endl;
return 0;
	
}