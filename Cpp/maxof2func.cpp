#include<iostream>
using namespace std;
void cmp(int a,int b)
{
	if(a>b)
		cout<< a<<" is greater than "<<b;
	else if(a<b)
		cout<<a<<" is lesser than "<<b;
	else
		cout<<"both are equal";
}
int main()
{
	int num1,num2;
	cout<<"Enter any two numbers to compare ";
	cin>>num1>>num2;
	cmp(num1,num2);
	return 0;
}
	
