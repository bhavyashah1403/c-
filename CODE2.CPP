//inheritance
#include<iostream.h>
#include<conio.h>
class AddData //base class
{
 public:
 int num1,num2;
 public:
 void accept()
 {
   cout<<"\n ENTER FIRST NUMBER";
   cin>>num1;
   cout<<"\n ENTER SECOND NUMBER";
   cin>>num2;
  }
};
class Addition:public AddData
 {
  int sum;
  public:
  void add()
  {
   sum=num1+num2;
  }
  void display()
  {
    cout<<"\addition of two number:"<<sum;
  }
};
int main()
{
 Addition a;
 a.accept();
 a.add();
 a.display();
 return 0;
}
