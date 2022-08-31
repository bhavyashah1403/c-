#include<conio.h>
#include<iostream.h>
//nested class
class A
{
  private:int adata;
  public:
  void getadata()
  {
   cout<<"enter the number";
   cin>>adata;
   cout<<" this is outer class and u enetered "<<adata;
  }
  class B
  {
    private:int bdata;
    public:
    void getbdata()
    {
      cout<<"enter number";
      cin>> bdata;
      cout<<"hi you are in inner class and u entered "<<bdata;
    }
  };
  B obj1;
  void display()
  {
    obj1.getbdata();
  }
  };
void main()
{clrscr();
 A obj2;
 obj2.getadata();
 obj2.display();
 getch();
}




