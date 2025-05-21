#include<iostream>
using namespace std;
class student 
{
	int rollno,cinic,*ptr,phone;
	string Name,a;
	public:
		student(){
		
             Name=a;
             cinic=1;
             phone=1;
            Name="ali";
         }
         student (int roll, int cinic,int phone,string name ,int ptr)
         {
         	Name=name;
         	cinic=1;
         	phone=292;
         	Name=ptr;
         	
		 }
		 void getdata(){
		 	cout<<"the name of emmplay="<<Name<<endl;
		 	cout<<"the cnic of peson="<<cinic<<endl;
		 	cout<<"the phone ="<<phone<<endl;
		 	cout<<"the change data="<<Name<<endl;
		 }
    
    
	
};
          int main(){
	      student s1("1",35403,03030, "imran");
         	s1.getdata();
	return();
}