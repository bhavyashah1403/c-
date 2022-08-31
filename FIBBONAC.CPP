#include<iostream.h>
#include<conio.h>

void main()
{
 int a=0;
  int b=1;
  int c,d;
  int e=1;
 cout<<"enter a number"<<endl;
 cin>>d;
 cout<<a<<", "<<b<<", ";
 while(e<=d)
 {
  c=a+b;
  cout<<c<<", ";
  a=b;
  b=c;

 }
 getch();
}