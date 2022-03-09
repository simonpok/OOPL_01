#include <iostream>
using namespace std;

class student{
	
	private:
		int marks; //char crush;
		
	public:
		char favfood; //favpet;
		
		void getData()
		{
			cout<<"The marks is: "<<marks<<endl;
			cout<<"The favourite food is: "<<favfood<<endl;
		}
};

 int main()
 {
 	student ram;
 	//fflush(stdin);
 	ram.favfood='bhat';
 	ram.getData();
 	return 0;
 }
