#include<iostream>
using namespace std;
class circlee{
	
	const float pi ;
	float radius;
	public:
		circle (float r)
		{                                 
			pi=3.145;
			radius =r;
		}
		void fun() const
		{
			pi=5;
		}
};