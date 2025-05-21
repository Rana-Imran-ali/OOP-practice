#include<iostream>
using namespace std;
#include<string>
class teacher {
	private:
			double salary;
	public:
	//	teacher()//constructor non parameterized 
	//	{
	//		cout<<"hello i am imran\n";
	//	}
	//	teacher(string n,string d,string s)//parameterized constructor
	//	{
		//	name =n;
		//	dept=d;
		//	subject=s;
	//	}
			teacher(string name,string dept,string subject)//pointers constructor
		{
		 this->name =name ;
		 this->dept=dept;
	   	this->subject=subject;
		}
		//copy constructor
		teacher(teacher &orgobj){
			cout<<"i am custom copy constructor..\n";
			this->name=orgobj.name;
			this->dept=orgobj.dept;
			this->subject=orgobj.subject;
		}
	string name;
	string dept;
	string subject;

//	member function
	void changedept(string newdept)
	
	{
		dept = newdept;
	}
//	setter
	void setsalary (double s){
		salary=s;
	}
//	getter
	double getsalary(){
		return salary;
	}
	void getInfo(){
		cout<<"name;"<<name<<endl;
			cout<<"subject;"<<subject<<endl;

	}
};
class account{
	private:
		double balance;
        string password;//data hiding encapsulation
	public:
string accountId ;
string username;
void setbalance(double s)//setter
{
	balance=s;
}
double getbalance()//getter
{
	return balance;
}
	
};

int main(){
//	class 1
//	teacher t1;
	//t1.name="imran";
//	t1.dept="it";
	//t1. setsalary(3000);
//	cout<<t1.name<<endl;
   // cout<<t1.dept<<endl;
//	cout<<t1.getsalary()<<endl;
	teacher t1("muzamil","cs","science");//parameterized constructor
//	t1.getInfo();
//	teacher t2(t1); //default copy constructor
//	t2.getInfo();
		teacher t2(t1); //custom copy constructor
    	t2.getInfo();
	//class 2
	account a1;
	a1.accountId="hbl";
	a1.username="ali";
	cout<<a1.accountId<<endl;
	cout<<a1.username<<endl;
	a1.setbalance(6000);
	cout<<a1.getbalance()<<endl;
	return 0;
}