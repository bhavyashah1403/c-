#include<conio.h>
#include<iostream.h>
void main()
{ clrscr();
  char str[15];
  char rev[15];
  int i, z=0,j=0;
  cout<<"enter str";

  cin.getline(str,15);
  for(i=0;str[i]!='\0';i++);
  int len=i;
  cout<<i;
 /*
  for(j=i,z=0;j>=0;j--,z++)
  {
    /*if(j==0)
    {
     rev[z]='\0';
     cout<<"last";
    }

    rev[z]=str[j];
    //cout<<j;
    //cout<<rev[z];

  }

  rev[z-1]='\0';
  cout <<"Count="<<z;
  cout<<rev[7];
 */
  while(z<=len)
  {
   rev[z]=str[i];
   z++;
   i--;
   if(i==0)
   {
     rev[z]='\0';
   }
  }

  for(j=0;j<len;j++)
  {
    cout<<rev[j];
  }
  cout<<rev;

  getch();
}