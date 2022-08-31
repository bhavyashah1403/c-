#include<conio.h>
#include<iostream.h>
class Average
{
  float a1;
  float b1;
  float c1;
  float avg;
  public:
  Average();
  Average(float a,float b,float c);
  void calcAvg();
  void display();
};
Average::Average()
{ int a,b,c;
  cout<<"enter three nos.";
  cin>>a>>b>>c;
  a1=a;
  b1=b;
  c1=c;
}
Average::Average(float a,float b,float c)
{
  a1=a;
  b1=b;
  c1=c;
}
void Average::calcAvg()
{
  avg=(a1+b1+c1)/3;
}
void Average::display()
{
  cout<<"average= "<<avg;
}
void main()
{
  Average obj1;
  Average obj2(1,2,5);
  obj1.calcAvg();
  obj1.display();
  obj2.calcAvg();
  obj2.display();
}


