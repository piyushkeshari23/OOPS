#include<iostream>
using namespace std;
class Shape
{
    public:
  Shape()
  {
    cout<<"Shape class constructor"<<endl;
  }
};
class TwoDShape : public Shape
{
    int l,b;
    public:
    TwoDShape()
  {
       cout<<"TwoDShape class constructor"<<endl;
  }
  TwoDShape(int length,int base )
  {
      l=length;
      b=base;
    cout<<"TwoDShape class constructor"<<endl;
  }
   void calculateArea()
  {
    cout<<"Area is : "<<l*b<<endl;
  }
};
class ThreeDShape : public Shape
{
    int l,b,h;
    public:
         ThreeDShape()
  {
    cout<<"ThreeDShape class constructor"<<endl;
  }
  ThreeDShape(int length,int base,int height)
  {
      l=length;
      b=base;
      h=height;
    cout<<"ThreeDShape class constructor"<<endl;
    }
 void calculateVolume()
  {
   cout<<"Volume is : "<<l*b*h<<endl;
  }
};
class Rectangle : public TwoDShape
{
    public:
  Rectangle(int length,int base) : TwoDShape(length,base)
  {
    cout<<"Rectangle class constructor"<<endl;
  }
};
class Square : public TwoDShape
{
    public:
  Square(int length) : TwoDShape(length,length)
  {
    cout<<"Square class constructor"<<endl;
  }
};
class Circle : public TwoDShape
{
    int r;
    public:
  Circle(int radius)
  {
      r=radius;
    cout<<"Circle class constructor"<<endl;
  }
   void calculateArea()
  {
    cout<<"Area is : "<<(22*r*r)/7<<endl;
  }
};
class Cube : public ThreeDShape
{
    public:
  Cube(int length) : ThreeDShape(length,length,length)
  {
    cout<<"Cube class constructor"<<endl;
  }
};
class Cuboid : public ThreeDShape
{
    public:
  Cuboid(int length,int base,int height) : ThreeDShape(length,base,height)
  {
    cout<<"Cuboid class constructor"<<endl;
  }
};
class Sphere : public ThreeDShape
{
    int r;
    public:
  Sphere(int radius)
  {
      r=radius;
    cout<<"Sphere class constructor"<<endl;
  }
  void calculateVolume()
  {
      cout<<"Volume is : "<<(4*22*r*r*r)/21<<endl;
  }
};


int main()
{
    TwoDShape *D2[10];
    ThreeDShape *D3[10];
    D2[0]=new Square(20);
     D2[0]->calculateArea();
    D2[1]=new Circle(7);
       D2[1]->calculateArea();
    D2[2]=new Rectangle(10,20);
     D2[2]->calculateArea();
    D3[0]=new Cube(10,20);
     D3[0]->calculateVolume();
    D3[1]=new Cuboid(10,20,30);
     D3[1]->calculateVolume();
    D3[2]=new Sphere(21);
     D3[2]->calculateVolume();

}
