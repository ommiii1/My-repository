#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter 2 variables to check biggest and smallest ";
	cin>>a>>b;
	if(a>b)
	{
		cout<<a<<"is biggest ";
		cout<<b<<"is smallest ";
	}
	else
	{
		cout<<b<<"is biggest ";
		cout<<a<<"is smallest ";
	}
	return 0;
}
