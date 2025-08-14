
#include<iostream>
using namespace std;
int main()
{
	int fact=1;
	int i,n;
	cout<<"Enter any number to check its factorial: ";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		if(i<n)
		{
		
			cout<<fact<<"x"<<i<<"="<<fact*i<<"\n";
		}
		fact=fact*i;
		
	}
	cout<<"\nFactorial of given number is= "<<fact<<"\n";
	fact=1;
	cout<<"Part 2\n";
	for(i=1;i<=n;i++)
	{
		if(i>1)
		{
			cout<<fact<<"x"<<i<<"="<<fact*i<<"\n";
		}
		fact=fact*i;
		
	}
	cout<<"\nFactorial of given number is= "<<fact;
	return 0;
}
