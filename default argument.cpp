#include <iostream>
using namespace std;

class sum
{
	int l,b;
	public:
		int add(int l, int b)
{
	return (l*b);
}

		
};

int main()
{
	sum d;
	cout << d.add(10, 5) << endl;

	
	cout << d.add(5, 5) << endl;

	
	cout << d.add(10, 2) << endl;
	return 0;
}
