#include<conio.h>
#include<iostream.h>
//prime numbers
class prime
{
 int num;
 public:
 void getdata();
 void display();
};
void prime::getdata()
{
  cout<<"enter number";
  cin>>num;
}
void prime::display()
{
  int count=0;
  for(int i=1;i<num;i++)
  {
    if(num%i==0)
    {
     count++;
    // cout<<i;
    }
   // cout<<"count= "<<count;
  }
  if(count>1)
  {
   cout<<"not a prime number";
  }
  else
  {
  cout<<"prime number";
  }
}
void main()
{clrscr();
 prime p1;
 p1.getdata();
 p1.display();
 getch();
}