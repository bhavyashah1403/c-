#include<conio.h>
#include<iostream.h>

//exercise 2 i
class Shape
{
 public:
 float area;
 float h;
 float b;
 public:
 void getdata()
 {
  cout<<"enter height ";
  cin>>h;
  cout<<"enter base ";
  cin>>b;
 }
 virtual void display()
 {
  cout<<" in base ";
 }
};
class Triangle: public Shape
{
  public:
  void display(){
  area=(0.5)*b*h;
  cout<<"area of triangle= "<<area; }
};
class Rectangle:public Shape
{ public:
  void display(){
  area=b*h;
  cout<<"area of rectangle= "<<area;}
};
void main()
{ clrscr();
  Triangle obj1;
  Rectangle obj2;
  Shape *ptr;
  ptr=&obj1;
  obj1.getdata();
  ptr->display();
  ptr=&obj2;
  obj2.getdata();
  ptr->display();
  getch();
}
