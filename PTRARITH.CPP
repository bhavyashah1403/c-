#include<conio.h>
#include<iostream.h>
void main()
{
  int a[10];
  int *ptr;
  int d;
  int max=0;
  ptr=a;
  clrscr();
  for(d=0;d<=9;d++)
  {
   cin>>a[d];
  }
  for(d=0;d<=9;d++)
  {
    if(*ptr>max)
    {
     max=*ptr;
    }
    ptr++;
  }
  cout<<"max is "<<max;
}