#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int num1,num2,temp;
 cout<<"enter 1st number";
 cin>>num1;
 cout<<"enter 2nd number";
 cin>>num2;
 cout<<"before swapping:first number:"<<num1<<" second number: "<<num2;
 temp=num1;
 num1=num2;
 num2=temp;
 cout<<"\n after swapping:first number: "<<num1<<" second number: "<<num2;
 return 0;
 getch();
}