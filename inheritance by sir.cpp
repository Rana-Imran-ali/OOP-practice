#include<iostream>
using namespace std;

class person{
	private:
	string name, cnic, adr, phone;
	public:
		person(){
			cout<<"Person Default Constructor Started"<<endl;
			name = ""; cnic = ""; adr = ""; phone = "";
			cout<<"Person Default Constructor Ended"<<endl;
		}
		person(string n, string cn, string ad, string ph){
			cout<<"Person Parameterized Constructor Started"<<endl;
			setData(n, cn, ad, ph);
			cout<<"Person Parameterized Constructor Ended"<<endl;
		}
		void setData(string n, string cn, string ad, string ph){
			cout<<"Person setData Started"<<endl;
			name = n; cnic = cn; adr = ad; phone = ph;
			cout<<"Person setData Ended"<<endl;
		}
		void getData(){
			cout<<"Person getData Started"<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"CNIC: "<<cnic<<endl;
			cout<<"Address: "<<adr<<endl;
			cout<<"Phone: "<<phone<<endl;
			cout<<"Person getData Ended"<<endl;
		}
		~person(){
			cout<<"Person Destructor Started"<<endl;
			cout<<"Deletiong the following Person:"<<endl;
//			getData();
			cout<<"Person Deleted"<<endl;
			cout<<"Person Destructor Ended"<<endl;
		}
};
class employee: public person{
	private:
	int eNo;
	public:
		employee(){
			cout<<"Employee Default Constructor Started"<<endl;
			eNo = 0;
			cout<<"Employee Default Constructor Ended"<<endl;
		}
		employee(string n, string cn, string ad, string ph, int en){
			cout<<"Employee Parameterized Constructor Started"<<endl;
			setData(n, cn, ad, ph, en);
			cout<<"Employee Parameterized Constructor Ended"<<endl;
		}
		void setData(string n, string cn, string ad, string ph, int en){
			cout<<"Employee setData Started"<<endl;
			person::setData(n, cn, ad, ph);
			eNo = en;
			cout<<"Employee setData Ended"<<endl;
		}
		void getData(){
			cout<<"Employee getData Started"<<endl;
			person::getData();
			cout<<"Employee No: "<<eNo<<endl;
			cout<<"Employee getData Ended"<<endl;
		}
		~employee(){
			cout<<"Employee Destructor Started"<<endl;
			cout<<"Deletiong the following Employee:"<<endl;
//			getData();
			cout<<"Employee Deleted"<<endl;
			cout<<"Employee Destructor Ended"<<endl;
		}
};
class teacher: public employee{
	string subject; int payScale;
	public:
		teacher(){
			cout<<"Teacher Default Constructor Started"<<endl;
			subject = ""; payScale = 0;
			cout<<"Teacher Default Constructor Ended"<<endl;
		}
		teacher(string n, string cn, string ad, string ph, int en, string sub, int ps){
			cout<<"Teacher Parameterized Constructor Started"<<endl;
			setData(n, cn, ad, ph, en, sub, ps);
			cout<<"Teacher Parameterized Constructor Ended"<<endl;
		}
		void setData(string n, string cn, string ad, string ph, int en, string sub, int ps){
			cout<<"Teacher setData Started"<<endl;
			employee::setData(n, cn, ad, ph, en);
			subject = sub; payScale = ps;
			cout<<"Teacher setData Ended"<<endl;
		}
		void getData(){
			cout<<"Teacher getData Started"<<endl;
			employee::getData();
			cout<<"Subject: "<<subject<<endl;
			cout<<"PayScale: "<<payScale<<endl;
			cout<<"Teacher getData Ended"<<endl;
		}
		~teacher(){
			cout<<"Teacher Destructor Started"<<endl;
			cout<<"Deletiong the following Teacher:"<<endl;
//			getData();
			cout<<"Teacher Deleted"<<endl;
			cout<<"Teacher Destructor Ended"<<endl;
		}
};
main(){
	cout<<"Hello World..."<<endl;
	teacher t1("Hasan","32202","Skp","0333",123,"CompSci",17);
	t1.getData();
	cout<<"Bye Bye..."<<endl;
}