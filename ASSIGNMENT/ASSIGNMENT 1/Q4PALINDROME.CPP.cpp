#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i,n=0,b=0;
	char a[30];
	cout<<"Enter the string"<<"\n";
    cin>>a;
	n=strlen(a);
	cout<<n<<"\n";
	for(i=0;i<n/2;i++)
	
		{
			if(a[i]==a[n-i-1])
			{
				b++;
			}
			else
			{
				b=0;
				cout<<"It is not palindrome";
				break;
				
			}
		}
	
	if(b==n/2)
	{
		cout<<"It is palindrome";
		
	}
	
	return 0;
}
