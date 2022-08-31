#include<iostream.h>
#include<conio.h>
void main()
{
 int n,f;
 cout<<"enter number "<<endl;
 cin>>n;
 f=1;
 while(n>1)
 {
  f=f*n;
  n--;
 }
 cout<<"factorial is:"<<f;
}