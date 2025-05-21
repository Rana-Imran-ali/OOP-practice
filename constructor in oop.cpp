#include<iostream>
using namespace std;
class Student{
	public:
		string Name,Department;
		int RollNo;
		Student(string name,string dept,int rollno){
			Name=name;
			Department=dept;
			RollNo=rollno;
		}
		void dataofstudents(){
			cout<<"Student Name: "<<Name<<endl;
			cout<<"Roll No:   "<<RollNo<<endl;
			cout<<"Department:   "<<Department<<endl;
		}
};
int main(){
	 Student s1=Student("Imran Ali","IT",110855);
	 s1.dataofstudents();
	 Student s2=Student("Muhammadd Muzzamal","IT",110837);
	 s2.dataofstudents();
	 
}


	

