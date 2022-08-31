#include<conio.h>
#include<iostream.h>
#include<string.h>
void main()
{clrscr();
 char s[100];
 cout<<"enter string";
 cin.getline(s,100);
 int len=strlen(s);
 int count=0;
 int countj=0;
 for(int i=0;i<len;i++)
 {
   if(s[i]==' ')
    {
     count++;
    }
    if(s[i]=='j'||s[i]=='J')
    {
     countj++;
    }
 }
 cout<<"number of words= "<<count;
 cout<<"number of j= "<<countj;
 getch();
}