#include<iostream.h>
#include<conio.h>

class factorial{
  int n;
  int fact;
  public:
  void getdata();
  void display();
};
void factorial::getdata()
{
  cout<<"enter number";
  cin>>n;
}
void factorial::display()
{
 if(n==0)
 {
   fact=1;

 }
 else{
    fact=1;
   for(int i=n;i>=1;i--)
   {
      fact=fact*i;
      cout<<fact;
   }
 }
 cout<<"factorial= "<<fact;
}
void main()
{clrscr();
 factorial f1;
 f1.getdata();
 f1.display();
 getch();
}