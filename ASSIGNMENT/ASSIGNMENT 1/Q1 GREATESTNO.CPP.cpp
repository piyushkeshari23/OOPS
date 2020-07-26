#include<iostream>
using namespace std;
int main()
{
	int a,b,c,g;
	cout<<"Enter first number";
	cin>>a;
	cout<<"Enter second number";
	cin>>b;
	cout<<"Enter third number";
	cin>>c;
	if(a>b && a>c)
	{
		g=a;
	}
	else
	if(b>a && b>c)
	{
		g=b;
	}
	else
{
		g=c;
}
cout<<"the greatest no. is ";
cout<<g;
	return 0;
}
