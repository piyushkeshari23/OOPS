#include<iostream>
using namespace std;

class Shape{
public:
    Shape()
    {
        cout<<"Shape class constructor"<<endl;
    }
};

class TwoDShape:public Shape
{
public:
    TwoDShape()
    {
        cout<<"TwoDShape class constructor"<<endl;
    }
};

class ThreeDShape:public Shape
{
public:
    ThreeDShape()
    {
        cout<<"ThreeDShape class constructor"<<endl;
    }
};

class Square:public TwoDShape{
public:
int a;
    Square(int side){
    this->a=side;
    }
    void calculateArea()
    {
        cout<<"Area of Square:"<<a*a<<endl;
    }
};
class Rectangle:public TwoDShape{
public:
int l,b;
    Rectangle(int length,int breadth){
      this->l=length;
      this->b=breadth;
    }
    void calculateArea()
    {
        cout<<"Area of Rectangle is : "<<l*b<<endl;
    }
};

class Triangle:public TwoDShape{
public:
int b,h;
    Triangle(int base,int height)
    {
      this->b=base;
      this->h=height;
    }
    void calculateArea()
    {
        cout<<"Area of Triangle : "<<(0.5)*b*h<<endl;
    }
};

class Circle:public TwoDShape{
public:
int r;
    Circle(int radius){
      this->r=radius;
    }
    void calculateArea()
    {
        cout<<"Area of Circle:"<<3.14*r*r<<endl;
    }

};

class Sphere:public ThreeDShape{
public:
int r;
    Sphere(int radius){
      this->r=radius;
    }
    void calculateVolume()
    {       
        cout<<"Volume of Sphere:"<<(1.33)*(3.14*r*r*r)<<endl;
    }

};

class Cube:public ThreeDShape{
public:
int a;
    Cube(int side){
      this->a=side;
    }
    void calculateVolume()
    {
        cout<<"Volume of Cube:"<<a*a*a<<endl;
    }
};

class Cone:public ThreeDShape{
public:
int r,h;
    Cone(int radius, int height){
      this->r=radius;
      this->h=height;
    }
    void calculateVolume()
    {
        cout<<"Volume of Cone : "<<0.33*3.14*r*r*h<<endl;
    }
};
int main()
{
  Square s(20);
  s.calculateArea();
  Rectangle r(10,20);
  r.calculateArea();
  Triangle t(20,10);
  t.calculateArea();
  Circle i(7);
  i.calculateArea();
  Sphere p(49);
  p.calculateVolume();
  Cube u(5);
  u.calculateVolume();
  Cone o(10,5);
  o.calculateVolume();
}