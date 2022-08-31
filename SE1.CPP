#include<iostream.h>
#include<conio.h>

class ABC
{
  public:int data;
  public:void getdata();
 };
 void ABC::getdata()
 {
   cout<<"enter ";
   cin>>data;
   cout<<"number= "<<data;
 }
  void main()
  {
   ABC a1;
   a1.getdata();
  }
