#include<iostream.h>
#include<conio.h>
struct circle
{
  float radius;
  float area;
  void accept()
  {
    cout<<"enter radius";
    cin>>radius;
  }
  void calc()
  {
    area=3.14*radius*radius;
    cout<<"area "<<area;
  }
};
void main()
{
  circle c1;
  c1.accept();
  c1.calc();
}