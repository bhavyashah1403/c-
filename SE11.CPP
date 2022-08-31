#include<conio.h>
#include<iostream.h>
class ABC
{
 int height,width;
 public:
 ABC();
 ABC(int,int);
 int area()
 {
  return(height*width);
 }
};
ABC::ABC()
{
 width=5;
 height=5;
}
ABC::ABC(int a,int b)
{
  width=a;
  height=b;
}
void main()
{ clrscr();
  ABC obj1(3,4);
  ABC obj2;
  cout<<"obj1's area= "<<obj1.area()<<endl;
  cout<<"obj2's area= "<<obj2.area()<<endl;
  getch();
}

