#include<iostream>
using namespace std;

class circle
{
	public:
		double radius,pi,area=0;
		
		
        double getData(){
        	double product=pi * this->radius * this->radius;
        	cout<<"The area of a circle is: "<<area;
        	//return product;
		}
		
};
int main()
{
  circle c;
  c.pi=3.14;
  c.radius=4;
  c.area;
  c.getData();
	
	return 0;
}
