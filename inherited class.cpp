#include<iostream>
#include<string>
using namespace std;

class teacher{
	public:
	string name;
	string dept;
	string subject;
	double salary;
	int number;
		
};
class student: public teacher
 {
	//public:
	//	string name;
		//string dept;
		//string subject;
		int number;
};
class employee: public teacher
 {
	public: 
		
		int number;
		int CNIC;
};
int main(){
	cout<<"enter the detail of first student";
teacher t1;
t1.name="imran";
cout<<t1.name<<endl;
t1.dept="it"; 


cout<<t1.dept<<endl;
t1.subject="computer";
cout<<t1.subject<<endl;
t1.no="3838383";
cout<<t1.no<<endl;
student s1;
	cout<<"enter the detail of second student";
s1.name="Mirza Ali Murtaza";
s1.dept="I.T";
s1.subject="Networking";
s1.no="3838383";
cout<<s1.no<<endl;
cout<<s1.name<<endl;
cout<<s1.dept<<endl;
cout<<s1.subject<<endl;
employee e1;
	cout<<"enter the detail of third student";

e1.name ="AHTHISHAM EZAT";
e1.dept="political science";
e1.subject="ARTS";
cout<<e1.name<<endl;
cout<<e1.dept<<endl;
cout<<e1.subject<<endl;
return 0;
	
}