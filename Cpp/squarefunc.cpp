#include<iostream>
using namespace std;
int sqr(int a)
{
	return a*a;
}
int main()
{
	int num;
	cout<<"Enter no to check its square: ";
	cin>>num;
	cout<<"square of given number is :"<<sqr(num);
	return 0;
}
