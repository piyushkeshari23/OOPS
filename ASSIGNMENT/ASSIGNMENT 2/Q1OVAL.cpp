#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,m;
	cout<<"enter the value n";
	cin>>n;
	for(i=0;i<n+2;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0&&j==2||i==n+1&&j==2)
			{
				for(m=0;m<n-4;m++)
				{
				cout<<"*";
			}}
			else
			if(i==1&&j==1||i==n&&j==1)
			{
				for(k=0;k<n-2;k++)
				{
				if(k==0||k==n-3)
				{
				cout<<"*";
			}
			else
			cout<<" ";
			}}
			else
			if(i>1&&i<n)
			{
				if(j==0||j==n-1)
				cout<<"*";
				else
				cout<<" ";
			}
			else
			cout<<" ";
			
		}
		cout<<endl;
	}
	return 0;
}

