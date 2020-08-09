#include<iostream>
using namespace std;
class Rectangle
{
	private:
		float length;
		float width;
		public:
			Rectangle()
			{
				length=1;
				width=1;
			}
			void setLength(float length)
			{
				if(length>0.0&&length<20.0)
				{
					this->length=length;
					
				}
				else
				cout<<"Invalid input\n";
			}
			void setWidth(float width)
			{
				if(width>0.0&&width<20.0)
				{
					this->width=width;
				}
				else
				cout<<"Invalid Input\n";
			}
			float getLength()
			{
				return length;
			}
			float getWidth()
			{
				return width;
			}
			float getPerimeter()
			{
				return (2*(length+width));
			}
			float getArea()
			{
				return (length*width);
			}
};
int main()
{

Rectangle r1;
cout<<"Length for rectangle 1 : "<<r1.getLength()<<endl;
cout<<"Width for rectangle 1 : "<<r1.getWidth()<<endl;
cout<<"Area of rectangle 1 :"<<r1.getArea()<<endl;
cout<<"Perimeter for rectangle 1 : "<<r1.getPerimeter()<<endl;

Rectangle r2;
int l,w;
cout<<"Length for rectangle 2 : ";
cin>>l;
r2.setLength(l);
cout<<"Width for rectangle 2 : ";
cin>>w;
r2.setWidth(w);

cout<<"Length for rectangle 2 : "<<r2.getLength()<<endl;
cout<<"Width for rectangle 2 : "<<r2.getWidth()<<endl;

cout<<"Area of rectangle 2 :"<<r2.getArea()<<endl;
cout<<"Perimeter for rectangle 2 : "<<r2.getPerimeter()<<endl;

}
