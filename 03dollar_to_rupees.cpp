//wap to convert dollar to rueess using friend function

#include<iostream>
using namespace std;

   class currConversion
   {
   	 private:
   	 int dollar;
   	 static int rate;
   	 public:
   	 void setvalue(int x)
   	  {
   	  	dollar=x;
   	}
	friend int convert(currConversion);
   };
   
   int currConversion::rate=119;
   	int convert(currConversion x)
   {
   	  int z;
   	  z=x.dollar*x.rate;
   	  return z;
	 }  
   int main()
   {
   	 currConversion O1;
   	 int value, t;
   	 cout<<"enter dollar value:"<<endl;
   	 cin>>value;
   	 
   	 O1.setvalue(value);
		t=convert(O1);
		cout<<"\nThe converted currency is:\n"<<t;
		return 0;
		   }
