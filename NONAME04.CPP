#include<iostream.h>
#include<conio.h>
void main()
{
int n;
int sum=0;
int i=1;
cout<<"enter number";
cin>>n;
while(i<=n)
{
  sum=sum+(i*i);
  i++;
}
cout<<sum;

}