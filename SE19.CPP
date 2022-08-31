#include<conio.h>
#include<iostream.h>
#include<math.h>
//object of one class to another
class polar
{
 private:
 double radius;
 double angle;
 public:
 polar()
 {
  radius=0.0;
  angle=0.0;
 }
 polar(double r,double a)
 {
   radius=r;
   angle=a;
 }
 void display()
 {
  cout<<"radius= "<<radius;
  cout<<"angle= "<<angle;
 }
 double getr()
 {
  return radius;
 }
 double geta()
 {
  return angle;
 }
};
class rec
{
  private:
  double xcord;
  double ycord;
  public:
  rec()
  {
   xcord=0.0;
   ycord=0.0;
  }
  rec(double x,double y)
  {
   xcord=x;
   ycord=y;
  }
  rec(polar p)
  {
   float r=p.getr();
   float a=p.geta();
   xcord=r*cos(a);
   ycord=r*sin(a);
  }
  void display()
  {
    cout<<"x coordinate= "<<xcord;
    cout<<"y coordinate= "<<ycord;
  }
 };
 void main()
 { clrscr();
   rec reccord;
   polar polcoord(10.0,0.7855);
   reccord=polcoord;
   cout<<" polar coordinates ";
   polcoord.display();
   cout<<"rectsangular coordinates: ";
   reccord.display();
   getch();
  }
