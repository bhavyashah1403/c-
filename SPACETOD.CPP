#include<conio.h>
#include<iostream.h>
#include<string.h>
// space to dash
void main()
{clrscr();
 char a[70];
 cout<<"enter string ";
 cin.getline(a,80);
 int n= strlen(a);
 for(int i=0;i<n;i++)
 {
   if(a[i]==' '
   )
   {
     a[i]='-';
   }
 }
 cout<<"final string= "<<a;
 getch();
}