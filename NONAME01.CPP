void calc(int,int,int);
#include<iostream.h>
#include<conio.h>
void main()
{
  int t1=0;
  int t2=1;
  int n;
  cout<<"enter number:"<<endl;
  cin>>n;
  cout<<"fibbonaci is :"<<t1<<","<<t2<<",";
  calc( t1, t2,n);
  getch();
}
void calc(int t1,int t2,int n)
{
  int t3=t1+t2;
  if(t3>n)
  {
   return;
  }
  cout<<t3<<",";
  t1=t2;
  t2=t3;
  calc(t1,t2,n);


}


