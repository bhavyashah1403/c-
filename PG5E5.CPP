#include<iostream.h>
#include<conio.h>
void main()
{
 for(int i=7;i>=0;i--)
  {
   if(i%2==0)
   continue;
   for(int j=0;j<i;j++)
    {
      cout<<"*";
    }
   cout<<"\n";
  }
  int count;
  for(int k=1;k<=7;k++)
   {
     if(k%2==0)
     continue;
     count=1;
     for(int m=1;m<=k;m++,count++)
      {
	cout<<count;
       }
     cout<<"\n";
    }
}