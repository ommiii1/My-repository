#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int i,n;
	cout<<"Enter any number to check its sum: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		
	}
	cout<<"\nsum of given natural number is"<<sum;
	
	return 0;
}
