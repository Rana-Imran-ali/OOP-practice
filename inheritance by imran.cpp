#include<iostream>
#include<string>
using namespace std;
class person{
	public:
		string name;
		int age;
	//	person(string name,int age){
		//	this->name=name;
			//this->age=age;
	//	}
};
class student : public person{
	public:
		int rollno;
	//	student(string name,int age,int rollno):person(name,age){
		//	this->rollno=rollno;
	//	}
	//	void getInfo(){
		//	cout<<"name:"<<name<<endl;
		//	cout<<"age:"<<age<<endl;
		//	cout<<"rollno:"<<rollno<<endl;
	//	}
};
class Gradestudent :public student{
	public:
		string researcharea;
};
int main(){
//	student s1("imran",19,110855);
	//s1.getInfo();
	Gradestudent s1;
	s1.name="imran";
	s1.researcharea="networking assignment";
	s1.rollno=110855;
	s1.age=19;
	cout<<s1.name<<endl;
	cout<<s1.researcharea<<endl;
	cout<<s1.rollno<<endl;
	cout<<s1.age<<endl;
	return 0;
}