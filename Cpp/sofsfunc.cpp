#include<iostream>
using namespace std;
int sum1=0;
int factorial=1;
int fact(int a)
{
	if(a==0)
		return 1;
	else
		factorial=a*fact(a-1);
		return factorial;
}
int sum(int b)
{
	for(int i=1;i<=b;i++)
	{
		sum1=sum1+fact(i);
	}
	return sum1;
}
int main()
{
	int a=5;
	cout<<sum(a);
	return 0;
}
