#include<iostream.h>
#include<conio.h>

class ABC
{
 private:int number;
 public:int data;
 public:
 void getdata()
 {
   cout<<"enter first no: ";
   cin>>number;
   cout<<"enter second no ";
   cin>>data;
 }
 void putdata()
 {
   cout<<"first number= "<<number;
   cout<<"second number= "<<data;
 }
};
void main()
{ clrscr();
  ABC obj;
  obj.data=10;
  obj.getdata();
  obj.putdata();
}