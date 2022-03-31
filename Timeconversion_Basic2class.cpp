#include <iostream>
using namespace std;

class time
{
	int hrs, min, sec;
	public:
		time(int t)
	{
		int a;
		hrs=t/3600;
		a=t%3600;
		min=a/60;
		sec= a%60;
	}
	void display()
	{
		cout<<"Hours: "<<hrs<<"  Minutes: "<<min<<"  Second: "<<sec;
	}
};

int main()
{
	int seconds;
	
	
	cout<<"Enter time in seconds"<<endl;
	cin>>seconds;
	time t(seconds);
	t.display();
	
	return 0;
}
