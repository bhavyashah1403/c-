#include<conio.h>
#include<iostream.h>
//invoking member using pointer
class ABC
{
 public: int data;
 public:
 void getdata()
 {
   cout<<"enter data";
   cin>>data;
   cout<<"number= "<<data;
 }
};
void main()
{ clrscr();
  ABC obj;
  int *p;
  obj.data=4;
  p= &obj.data;
  cout<< *p;
  ABC *q;
  q= &obj;
  q->getdata();
  getch();
}

