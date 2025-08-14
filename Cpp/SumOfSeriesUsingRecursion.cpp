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
	if(b==0)
		return 0;
	else
		sum1=sum(b-1)+fact(b-1);
	return sum1;
}
int main()
{
	int a=5;
	cout<<sum(a+1)-1;
	return 0;
}
