#include<iostream>
using namespace std;
int main()
{
	int i,count=0,n;
	cout<<"Enter number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<"It is a prime number";
	}
	else
	{
		cout<<"It is not a prime number";
	}
	return 0;
}
