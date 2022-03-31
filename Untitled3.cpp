//WAP to convert distance into km and meter where user gives input in meter

#include<iostream>
using namespace std;

class Distance
{
	int km, m;
	public:
		Distance(int t)
		{
			
			km= t/1000;
			m= t%1000;
		}
		void display()
		{
			cout<<"Kilometer: "<<km<<"  Meter: "<<m;
		}
};

int main()
{
	
	int met;
	
	
	cout<<"Enter distance in meter: "<<endl;
	cin>>met;
	Distance d(met);
	d.display();
	
	return 0;
}

