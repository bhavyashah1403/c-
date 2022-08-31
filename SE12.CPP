#include<conio.h>
#include<iostream.h>
//destructor
class ABC
{
 int*width,*height;
 public:
 ABC(int,int);
 ~ABC();
 void area()
 {
  cout<<"area= "<<(*height* *width);
 }
};
ABC::ABC(int a,int b)
{
 width=new int;
 height=new int;
 *width=a;
 *height=b;
}
ABC::~ABC()
{
 delete height;
 delete width;
}
void main()
{
  ABC obj1(3,4);
  ABC obj2(5,6);
  obj1.area();
  obj2.area();
}