#include<iostream>
using namespace std;

int main()
{
int n,sum=0;
cin>>n;
for(int i=n;i!=0;i=i/10){
 sum=sum*10+i%10;
}
if(n==sum)
    cout <<"palindrome";
else
cout<<"not palindrome";
    return 0;
}
