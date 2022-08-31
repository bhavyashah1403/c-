#include<iostream.h>
#include<conio.h>
void main()
{
  char arr[80];
  cout<<"enter string";
  cin.getline(arr,80);
  for(int i=0;i<=79;i++)
  {
   if(arr[i]==' ')
   {
     arr[i]='-';
   }
  }
  cout<<"replaced string is"<<endl;
  cout<<arr;
  getch();
}