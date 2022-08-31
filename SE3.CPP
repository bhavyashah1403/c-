#include<iostream.h>
#include<conio.h>
//invoking public class members
class ABC
{
 public:int data;
 public:
 void display()
 {
   cout<<"invoked member ";
 }
};
void main()
{ clrscr();
  ABC obj;
  obj.data=59;
  cout<<obj.data;
  obj.display();
  getch();
}
