#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cout<<"enter the value n";
	cin>>n;
	for(i=1;i<=3*n;i++)
	{
		for(j=1;j<=n+2;j++)
	{
	
		if(i+j==n+1)
		for(k=0;k<((2*i)-1);k++)
		{
			cout<<"*";
		}
		else
		if(i>n && j==n)
		{
			cout<<"*";
		}
		else
		{
			cout<<" ";
		}
	
			
	}	
		cout<<endl;
	}
	return 0;
}
