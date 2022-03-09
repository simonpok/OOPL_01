#include <iostream>
using namespace std;

class boy
{
	//data
	public:
	int id;
	string name;
	double ht;
	
	//function
	void fetchdetails()
	{
		cout<<"The name is: "<<name<<endl;
		cout<<"The id is: "<<id<<endl;
		cout<<"The height is: "<<ht;
	}
	
};

int main()
{
	boy b;
	b.id=1122;
	b.name="Bijay sharma";
	b.ht = 5.11;
	b.fetchdetails();
	
	return 0;
}
	
