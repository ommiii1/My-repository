#include<iostream>
using namespace std;
int main()
{
	int num,n,rev=0;
	cout<<"\nEnter test case"<<s+1<<" to check palindrome or not:\n ";
	cin>>num;
	n=num;
	while(num>0)
	{
		rev=rev*10+(num%10);
		num/=10;
	}
	if(rev==n)
		cout<<"\nIs a palindrome number";
	else
		cout<<"\nIs not a palindrome number";
	return 0;
		
}
