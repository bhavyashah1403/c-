#include<iostream.h>
#include<conio.h>
//to add digits
void main()
{clrscr();
  long n;
  cout<<"enter number";
  cin>>n;
  long sum=0;
  long m;
 // if(n>=1)
 // { cout<<"greater";
 // }
  while(n>=1)
  {
    m=n%10;
    sum=sum+m;
    n=n/10;
    cout<<sum;
  }
 cout<<"sum is "<<sum;
 getch();
}