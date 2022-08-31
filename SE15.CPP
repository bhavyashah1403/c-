#include<conio.h>
#include<iostream.h>
//use of virtual function
class base
{
 public:
 virtual void display()
 {
  cout<<"In base";
 }
};
class derived1:public base
{
 public:
 void display()
 {
  cout<<"in derived1";
 }
};
class derived2:public base
{
 public:
 void display()
 {
  cout<<"in deried2";
 }
};
void main()
{
 derived1 obj1;
 derived2 obj2;
 base *ptr;
 ptr=&obj1;
 ptr->display();
 ptr=&obj2;
 ptr->display();
}


