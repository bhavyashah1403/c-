#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a;
 int count=0;
 cout<<"enter the number";
 cin>>a;
 if(a==1)
 {
  cout<<"neither prime nor composite";

 }
 if(a<=0)
 {
  cout<<"invalid";
 }
 int i=2;
 while(i<a&&a>=2)
 {
   if(a%i==0)
   {
    count++;
   }
   i++;
 }
 if(count==0&&a>=2)
 {
  cout<<"prime number";

  }
  if(count!=0&&a>=2)
  {
  cout<<"not prime";
 }

 getch();
 }
