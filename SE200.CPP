#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>

void main()
{
  clrscr();
  /*
  char arr[]=" hi and welcome\n";
  ofstream f1("readme.txt");
  for(int i=0;i<strlen(arr);i++)
  {
   f1.put(arr[i]);
  }
  */
  cout <<"Contents of file are:";
  char ch;
  ifstream f2("readme.txt");
  while(f2)
  {  f2.get(ch);
	cout<<ch;
  }
  cout<<ch;
  getch();

}