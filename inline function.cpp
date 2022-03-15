#include <iostream>
using namespace std;
inline int sum(int a, int b)
{
	return a+b;
}
int main()
{
  int a,b;
    cout <<"Enter value for a: ";
    cin>>a;
  cout<<"Enter value for b: ";
  cin>>b;
	cout << "The sum is: " << sum(a,b);
	return 0;
}
