#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"enter first number: ";
	cin>>a;
	cout<<"enter second number: ";
	cin>>b;
	char op;
	cout<<"enter the operator you want to use between these 2 numbers";
	cin>>op; //+,-,*,/,%
	switch(op)
	{
		case '+': cout<<"you chose the sum operator. \n"<<"the sum is:";
		          cout<< a+b;
		break;
		case '-': cout<<"you chose the subtraction operator. \n"<<"the difference is: ";
		          cout<< a-b;
		break;
		case '*': cout<<"you chose the multiplication operator. \n"<<"the product is: ";
		          cout<< a*b;
		break;
		case '/': cout<<"you chose the division operator. \n"<<"the quotient is: ";
		          cout<< a/b;
		break;
		case '%': cout<<"you chose the modulus operator. \n"<<"the remainder is: ";
		          cout<< a % b;
		default:  cout<<"input invalid";
	}
}