#include<conio.h>
#include<iostream.h>
//base access class control:public
//private wont work
class base
{
  int i,j;
  public:
  void set(int a,int b)
  {
   i=a;
   j=b;
  }
  void show()
  {
   cout<<"i= "<<i<<"j= "<<j<<endl;
  }
};
class derived: public base
{
  int k;
  public:
  derived(int x)
  {
   k=x;
  }
  void showk()
  {
   cout<<"k= "<<k<<endl;
  }
};
void main()
{
 derived ob(3);
 ob.set(1,2);
 ob.show();
 ob.showk();
}