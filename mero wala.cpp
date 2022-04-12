#include <iostream>
using namespace std;
 class Account
 {
 	protected:
 		
 		long int acc_n;
		int rate1;
		int rate2;
		int p_value;
		int time;
		 
		
 };
 
 class Saving : public Account
 {
 	void setValue1(long int a,int p, int t)
 	{
 		p_value= p;
 		acc_n=a;
 		time=t;
	 }
	 void SI_calc()
	 {
	 	int SI=0;
	 	SI=(p_value*time*rate1)/100;
	 }
	 void output1()
	 {
	 	int SI;
	 	cout<<"The value for "<<acc_n<<"is: "<<SI<<endl;
	 }
 };
 
 class Current : public Account
 
 {
 	void setValue2(long int a,int p, int t)
 	{
 		p_value= p;
 		acc_n=a;
 		time=t;
	 }
	 void CI_calc()
	 {
	 	int CI;
	 	//int pow=0;
	 	CI=p_value((1+rate2/100),time);
	 }
	  void output2()
	 {
	 	cout<<"The value for "<<acc_n<<"is: "<<CI<<endl;
	 }
 };
 int Account :: rate1=5;
 int Account :: rate2=10;
 
 int main()
 {
 	Current obj1;
 	Saving obj2;
 	
 	int p,t;
 	double acc;
 	
 	cout <<"Enter account number: "<<endl;
 	cin>>acc;
 	cout<<"Enter Principle: "<<endl;
 	cin>>p;
 	cout<<"Enter Time period: "<<endl;
 	cin>>t;
 	 
 	 obj1.setValue(acc,p,t);
 	 obj1.output1();
 	 
 	 obj2.setValue(acc,p,t);
 	 obj.output2();
 	 
 	 return 0;
 }
