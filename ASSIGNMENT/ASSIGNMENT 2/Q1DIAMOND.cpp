#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,m;
	cout<<"enter the value of n";
	cin>>n;
	for(i=0;i<n;i++)
	{ if(i<=n/2)
		for(j=0;j<=n/2;j++)
	{
		if(i+j==n/2)
		{
		cout<<"*";
		for(k=0;k<(2*i)-1;k++)
		{
			cout<<" ";
		}
		if(i!=0)
		{
		
		cout<<"*";
	}
	}
	else
	cout<<" ";
	
	}
	{
		if(i>n/2)
		for(j=0;j<n;j++)
		{
			if(i-j==n/2 || i+j==3*(n/2))
			cout<<"*";
			else
			cout<<" ";
		}
		
	}
	   cout<<endl;
}

	return 0;
}
