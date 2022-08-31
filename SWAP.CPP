#include<conio.h>
#include<iostream.h>
//swap two numbers
class swap
{
 int a;
 int b;
 int temp;
 public:
 void getdata();
 void display();
};
void swap::getdata()
{
 cout<<"enter both numbers";
 cin>>a>>b;
}
void swap::display()
{
 cout<<"before swapping:"<<endl;
 cout<<"a= "<<a<<endl;
 cout<<"b= "<<b<<endl;
 temp=a;
 a=b;
 b=temp;
 cout<<"after swapping:"<<endl;
 cout<<"a= "<<a<<endl;
 cout<<"b= "<<b<<endl;
}
void main()
{
 clrscr();
  swap s1;
  s1.getdata();
  s1.display();
  getch();
}