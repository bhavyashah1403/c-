#include<conio.h>
#include<iostream.h>
class ABC
{
 public: static int data;
 public:
 static void getdata()
 {
  ++data;
  cout<<"count is "<<data;
 }
 void putdata()
 {
  ++data;
  cout<<"now count is "<<data;
 }
};
int ABC::data=5;
void main()
{
 ABC::data=10;
 ABC obj;
 ABC::getdata();
 obj.putdata();
}