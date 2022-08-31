#include<conio.h>
#include<iostream.h>
#include<string.h>
//
class String
{
  private:
  int size;
  char str[80];
  int n1,n2;
  public:
  String()
  {
   strcpy(str," ");
  }
  String(char s[])
  {
   strcpy(str,s);
  }
  void display()
  {
   cout<<str<<endl;
  }
  String operator+(String s1)
  {
    if((strlen(str)+strlen(s1.str))<size)
    {
      String temp;
      strcpy(temp.str,str);
      strcat(temp.str,s1.str);
      return temp;
    }
    else
    cout<<"be cautious!!overflow";
  }
};
void main()
{
 String obj1="HI";
 String obj2="HELLO";
 String obj3;
 obj1.display();
 obj2.display();
 obj3=obj1+obj2;
 obj3.display();
}