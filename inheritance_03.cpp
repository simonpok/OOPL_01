#include <iostream>
#include <string>
using namespace std;

class boy
{
	private:
		string gender;
		
	protected:
	    int id;
	    
	public:
	   
	   void hello(){
	   	
	   }
	   void setGender(string gdr)
	   {
          gender=gdr;	   	
 	   }     
 	   string getGender()
		{
 	   	return gender;
		}
		
};

class ram : public boy
{
	public:
		void hi(){
		
		}
	void setId(int x)
	{
		id = x;
	}
	
	void displayinfo(string c)
	{
		cout<<"I am a: "<<c<<endl;
		
	}
	void displayid()
	{
	   cout<<"Your ID is: "<<id<<endl;	
	}
};

int main()
{
	ram r1;
	r1.setId(3456);
	r1.displayid();
	r1.setGender("Male");
	r1.displayinfo(r1.getGender());
	return 0;
}



