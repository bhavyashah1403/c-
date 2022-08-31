#include<iostream.h>
#include<conio.h>

class circle
{
 public:
 float area;
 float r;
 void input()
 {
 cout<<"enter radius of circle";
 cin>>r;
 }
 void findArea()
 {
  area=3.14*r*r;
 }
 void display()
 {
  cout<<"area of circle is: "<<area;
 }
};
int main()
{
 clrscr();
 circle obj;
 obj.input();
 obj.findArea();
 obj.display();
 return 0;
}