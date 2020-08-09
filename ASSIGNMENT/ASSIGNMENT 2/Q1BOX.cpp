#include<iostream>
using namespace std;
int main()
{
	int i,j,n,m;
	cout<<"enter the no. of rows and columns\n";
	cout<<"n=";
	cin>>n;
	cout<<"\nm=";
	cin>>m;
	for(i=0;i<n;i++)
	
	{
		for(j=0;j<m;j++)
		{
			if(i==0||i==n-1||j==0||j==m-1)
			{
			cout<<"*";
		}
		else
		cout<<" ";
		
		
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
