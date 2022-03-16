#include <iostream>
using namespace std;

class add 
{
	int a,b;
	public:
		inline int sum(int a, int b)
{
	return a+b;
}
		
	
};

int main()
{
	add s;
    int a,b;
    cout <<"Enter value for a: ";
    cin>>a;
    cout<<"Enter value for b: ";
    cin>>b;
	cout << "The sum is: " << s.sum(a,b);
	return 0;
}
