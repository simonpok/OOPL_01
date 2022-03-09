#include<iostream>
using namespace std;

class maths
{
	public:
		int a,b,product=0;
		
         void getData(){
        	int product=a*b;
        	cout<<"The product of a and b is: "<<product;
		}
		
};
int main()
{
	maths m;
	m.a=2;
	m.b=5;
	m.product;
	m.getData();
	
	return 0;
}
