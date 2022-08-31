#include<conio.h>
#include<iostream.h>
//type of method defination
class ABC
{
 int data;
 public:
 void getdata()
 {
  cout<<"enter number";
  cin>>data;
 }
 void putdata();
};
void ABC::putdata()
{
 cout<<"entered number= "<<data;
}
void main()
{
 ABC obj1;
 obj1.getdata();
 obj1.putdata();
}