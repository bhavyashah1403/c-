#include<iostream.h>
#include<conio.h>
//right justify
void main()
{clrscr();
 char a[100];
 cout<<"enter name";
 cin.getline(a,29);
 for(int i=0;i<=40;i++){
 cout<<" ";
 }
 cout<<a;
 getch();
}