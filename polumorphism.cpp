#include<iostream>
using namespace std;
class person{
	virtual void display()
	{
		cout<<"This is a person."<<endl;
	}
	person()
	{
		cout<<"Person Class Constructor "<<endl;
	}
	person(string n,string c,string ph)
	{
		
	}

};

int main(){
	Employee e1;
	Person p1;
	p1.display();
	e1.display();
	return 0;
}