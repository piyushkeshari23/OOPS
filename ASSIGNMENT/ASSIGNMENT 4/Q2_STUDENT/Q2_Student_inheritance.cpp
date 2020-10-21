#include<iostream>
using namespace std;
class Student{
public:
Student()
{
    cout<<"Student class constructor"<<endl;
}
};
class UndergraduateStudent : public Student{

public:
UndergraduateStudent()
{
    cout<<"Undergraduate class constructor"<<endl;
}
};
class GraduateStudent : public Student{
public:
GraduateStudent()
{
    cout<<"Graduate class constructor"<<endl;
}
};
class Freshman : public UndergraduateStudent{
    public:
   Freshman()
    {  
        cout<<"Freshman class constructor"<<endl;
    }
};
class Junior : public UndergraduateStudent{
    public:
    Junior()
    {   
        cout<<"junior class constructor"<<endl;

    }
};
class Senior : public UndergraduateStudent{
    public:
   Senior()
    {   
        cout<<"Senior class constructor"<<endl;
    }
};
class DoctoralStudent : public GraduateStudent{
    public:
      DoctoralStudent()
    { 
         cout<<"Doctoral class constructor"<<endl;

    }
};
class MastersStudent : public GraduateStudent{
    public:
     MastersStudent()
    {  
        cout<<"Masters class constructor"<<endl;
    }
};
int main()
{   int x;
    cout<<"1. Undergraduate Student\n2. Graduate Student\n";
    cin>>x;
    if(x==1)
    { int y;
        cout<<"1. Freshman\n2. junior\n3. Senior\n";
        cin>>y;
        if(y==1)
        {
Freshman f;

 }
 else if(y==2)
 {
Junior j;


 }
 else
{ 
Senior s1;

    }}
    else
    {  int z;
        cout<<"1. Doctoral Student\n2. Masters Student\n";
        cin>>z;
    if(z==1)
    {
DoctoralStudent d;

    }
    else
    {
MastersStudent m;

    }
}}