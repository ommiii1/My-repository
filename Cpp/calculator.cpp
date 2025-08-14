#include<iostream>
using namespace std;
int main()
{
	int a,var1,var2;
	cout<<"Enter 1 for addition"<<endl<<"Enter 2 for substraction"<<endl<<"Enter 3 for multiplication"<<endl<<"Enter 4 for divsion"<<endl;
	cin>>a;
	if(a==1)
	{
		cout<<"Enter 2 variables to add"<<endl;
		cin>>var1>>var2;
		cout<<"Addition of given numbers is "<<var1+var2;
	}
	if(a==2)
	{
		cout<<"Enter 2 variables to substract"<<endl;
		cin>>var1>>var2;
		cout<<"substraction of given numbers is "<<var1-var2;
	}
	if(a==3)
	{
		cout<<"Enter 2 variables to multiply"<<endl;
		cin>>var1>>var2;
		cout<<"multiplication of given numbers is "<<var1*var2;
	}
	if(a==4)
	{
		cout<<"Enter 2 variables to divide"<<endl;
		cin>>var1>>var2;
		if(var2==0)
		{
			cout<<"Not difine";
		}
		else
		{	
			cout<<"division of given numbers is "<<var1/var2;
		}
	}
	return 0;
}
