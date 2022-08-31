#include<iostream.h>
#include<conio.h>

void main()
{clrscr();
 long num;
 cout<<"enter number to check palindromility: ";
 cin>>num;
 long rev=0;
 long temp;
 long num1=num;
 while(num!=0)
 {
   temp=num%10;
   rev=(rev*10)+temp;
   num=num/10;
 }
 cout<<"rev= "<<rev<<endl;
 if(num1==rev)
 {
   cout<<"it is palindrome";
 }
 else
 {
  cout<<"not a palindrome";
 }
 getch();
}