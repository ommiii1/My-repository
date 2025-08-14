#include<iostream>
using namespace std;
int main()
{	
	int a,b;
	char c;
	cout<<"Enter '+' for addition\nEnter '-' for substraction\nEnter '*' for multiplication\nEnter '/' for division\n";
	cin>>c;
	cout<<"Enter two operands for operation: ";
	cin>>a>>b;
	switch(c)
	{
		case '+':
			cout<<"addtion is "<<a+b;
			break;
		case '-':
			cout<<"substraction is"<<a-b;
			break;
		case '*':
			cout<<"multiplication is"<<a*b;
			break;
		case '/':
			if(b==0)
			{
				cout<<"Cant divide with 0";
				break;
			}
			else
			{
				cout<<"division is"<<a/b;
				break;
			}
		default:
			cout<<"Enter a valid choice!!!!!";
	}
	return 0;
}
