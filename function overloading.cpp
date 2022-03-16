#include<iostream>
using namespace std;

class area
{
	int y,l,b;
	double r;
	
	public:
	//for square
int setvalue(int y)
{
	return y*y;
}

//for rectangle
int setvalue (int l, int b)
{
	return l*b;
}

//for circle
double setvalue(double r)
{
	return 3.14*r*r;
}

	
};

int main()
{
	int y,l,b;
	double r;
	area obj;
	cout<<"Enter the length of a square: ";
	cin>>y;
	cout<<"Enter the length of a rectangle: ";
	cin>>l;
	cout<<"Enter the breadth of a rectangle: ";
	cin>>b;
	cout<<"Enter the radius of a circle: ";
	cin>>r;
	
	cout<<endl<<"The area of square is: "<<obj.setvalue(y);
	cout<<endl<<"The area of square is: "<<obj.setvalue(l, b);
	cout<<endl<<"The area of circle is: "<<obj.setvalue(r);
}
