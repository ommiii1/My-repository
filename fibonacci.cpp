#include<iostream>
using namespace std;
int main()
{
	int num,a=0,b=1,sum=0;
	cout<<"Enter number for fibonacci: ";
	cin>>num;
	if(num==1)
		cout<<a;
	else if(num==2)
		cout<<a<<"\n"<<b<<"\n";
	else if(num<=0)
		cout<<"Enter number above 0 !!!!!!!";
	else	
		cout<<a<<"\n"<<b<<"\n";
		for(int i=0;i<num-2;i++)
		{
			sum=a+b;
			cout<<sum<<"\n";
			a=b;
			b=sum;
		}
	return 0;
}
		
		
