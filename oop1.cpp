#include <iostream>
using namespace std;
class student{
	private:
		int number;
		string text;
		public:
			student(){
				number =0;
				text=" ";
				cout<<"constructor is completed";
			}
			void getdata(){
				cout<<"Number: "<<number<<endl;
				cout<<"Text: "<<text<<endl;
			}
};
int main(){
	student obj;
	obj.getdata();
	return 0;
}