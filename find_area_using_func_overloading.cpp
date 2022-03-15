#include<iostream>
using namespace std;

//for square
int area(int y)
{
	return y*y;
}

//for rectangle
int area(int l, int b)
{
	return l*b;
}

//for circle
double area(double r)
{
	return 3.14*r*r;
}

int main()
{
	int y,l,b;
	double r;
	cout<<"Enter the length of a square: ";
	cin>>y;
	cout<<"Enter the length of a rectangle: ";
	cin>>l;
	cout<<"Enter the breadth of a rectangle: ";
	cin>>b;
	cout<<"Enter the radius of a circle: ";
	cin>>r;
	
	cout<<endl<<"The area of square is: "<<area(y);
	cout<<endl<<"The area of square is: "<<area(l, b);
	cout<<endl<<"The area of circle is: "<<area(r);
}


