#include <iostream>
#include <string>
using namespace std;

class Father
{
	public:
		string bloodtype,caste;
	
		
	protected:
	    string bloodtype1, caste1; 
	    
	
		
};

class Son : public Father
{
	public:
		
	void setData(string x, string y)
	{
		bloodtype1 = x;
		caste1     = y;
	}
	
	void displayinfo()
	{
		if(caste==caste1 && bloodtype==bloodtype1)
		{
			cout<<"Son and father info are matched"<<endl;
		}
		else
		{
			cout<<"Son and father info aren't matched"<<endl;
		}
		
	}

};

int main()
{
	string x, y, caste, bloodtype,caste1, bloodtype1;
	Son obj1;
	Father obj2;
	
	
	
	cout<<"Enter Father's Caste: "<<endl;
	cin>>caste;
	cout<<"Enter father's Blood type: "<<endl;
	cin>>bloodtype;
	cout<<"Enter son's caste: "<<endl;
	cin>>y;
	cout<<"Enter sons's Blood type: "<<endl;
	cin>>x;
	obj1.displayinfo();
	obj1.setData(x,y);
	
	return 0;
}



