#include<iostream>
using namespace std;
int prime(int a)
{
	if(a==2)
		return 0;
	else
		for(int i=2;i<a;i++)
		{
			if(a%i==0)
				return 0;
			else
				continue;
		}
		return 1;
}
int main()
{
	int num;
	cout<<"Enter the number to check its prime or not: ";
	cin>>num;
	if(prime(num)==0)
		cout<<"Is not prime";
	else
		cout<<"Is prime";
	return 0;
}
	
