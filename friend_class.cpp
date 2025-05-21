#include<iostream>
using namespace std;

class A{
	int x;
	public:
		friend void func(A &o);
		void show()
		{
			cout<<"X: "<<x<<endl;
			cout<<"y:"<<y<<endl;
		}
		void setx(int z)
		{
			x=z;
		}
	};
	class B{
		int y;
		friend class A;
		void showB(){
			cout<<"y:"<<y<<endl;
		}
	};
	void func(A &obj)
{
	obj.x=10;
}
int main(){
	A oA;
	oA.setx(5);
	oA.show();
	func(oA);
	oA.show();
	return 0;
}