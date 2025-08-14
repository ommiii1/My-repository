#include<iostream>
using namespace std;
int main()
{
	int p=0,n=0,z=0,num,a;
	cout<<"Enter how many numbers you want to check:  ";
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cout<<"\nEnter number to check: ";
		cin>>num;
		if(num==0)
			z++;
		else if(num>0)
			p++;
		else
			n++;
	}
	cout<<"\nFrom given numbers\n"<<p<<" is postive numbers,\n"<<n<<" is negative numbers and\n"<<z<<" zeros\n";
	return 0;
}
