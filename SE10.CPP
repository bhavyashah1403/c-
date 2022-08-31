#include<conio.h>
#include<iostream.h>
//copy constructor
class ABC
{
 public: int data;
  public:
  ABC(){ }
  ABC(int value){ data= value;}
  ABC(ABC &obj)
  {
    data=obj.data;
    cout<<"copy constructor invoked:"<<data;
  }
};
void main()
{clrscr();
 ABC obj1(50);
// obj1.data=50;
 ABC obj2;
 ABC obj3(obj1);
 obj2=obj1;
 cout<<obj2.data;
 getch();
}