#include<iostream.h>
#include<conio.h>
#include<string.h>
const int size=80;
class string
{
  private:
     char str[size];
  public:
     string()
     {
       str[0]='\0';
     }
     string(char s[])
     {
       strcpy(str,s);
     }
     void display()
     {
       cout<<str;
     }
     operator char*()
     {
       return str;
     }
 };
 void main()
 {
  string obj1;
  char newstr[]="\HI";
  obj1=newstr;
  obj1.display();
 // string obj2="WELCOME";
 // cout<<obj2;
}
