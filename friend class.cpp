#include<iostream>
using namespace std;
class A;
class B
{
int y;
friend class A;
void showB()
{
	y=10;
	cout<<"y:"<<y<<endl;
	}	
};
class A {
	int x;
	public:
		void showA (B&obj)
		{
			x=50;
			cout<<"x:"<<x<<endl;
			cout<<"y:"<<obj.y<<endl;
		}
};
int main(){
		A oA;
		B oB;
		oA.showA(oB);

	return 0;
	
}