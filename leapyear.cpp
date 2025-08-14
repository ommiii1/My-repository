#include<iostream>
using namespace std;
int main()
{
	int yr;
	cout<<"Enter year to check leap or not: ";
	cin>>yr;
	if((yr%4==0)&&(yr%100!=0)||(yr%400==0))
	{
			cout<<"Leap year";
	}
	else
	{
		cout<<"Not leap year";
	}
	return 0;
}
