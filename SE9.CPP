#include<iostream.h>
#include<conio.h>
//constructors
class ABC
{
  int data;
  public:
  ABC()
  {
   cout<<"default constructor";
  }
  ABC(int a)
  {
   cout<<"parameterised constructor";
   data=a;
   cout<<"value of data is: "<<data;
  }
};
  void main()
  {
    clrscr();
   ABC obj;
   ABC obj1(5);
   getch();
  }
