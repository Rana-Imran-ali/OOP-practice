#include<iostream>
#include<string>
using namespace std;

class Employee{
    string Ename, cnic, address;
    int payScale;
public:
    Employee(){
        cout<<"Default Constructor of Employee Started\n";
        Ename = cnic = address = "";
        payScale = 0;
        
        cout<<"Default Constructor of Employee Ended\n";
    }
    Employee(string Ename, string cn, string ad, int ps){
        cout<<"Parameterized Constructor of Employee Started\n";
        this->Ename = Ename;
        cnic = cn;
        address = ad;
        payScale = ps;
        cout<<"Parameterized Constructor of Employee Ended\n";
    }
    void getData(){
        cout<<"---Employee Information---\nName:"<<Ename<<endl;
        cout<<"CNIC:"<<cnic<<endl;
        cout<<"Address:"<<address<<endl;
        cout<<"PayScale:"<<payScale<<endl;
        cout<<"-- Employee Information \n--"<<endl;
		 }
};
main(){
    Employee e1;
    e1.getData();
    Employee e2("Hasan", "35404", "Skp", 17);
    e2.getData();
    
}