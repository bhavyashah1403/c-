#include<iostream.h>
#include<conio.h>
//program using array object
class ABC
{
 private:int number;
 public: void getdata()
 {
   cout<<" enter number";
   cin>>number;
   cout<<number;
 }
 void putdata()
 {
   cout<<"the number is: "<<number;
 }
};
void main()
{
 ABC obj[3];
 for(int i=0;i<3;i++)
 {
   obj[i].getdata();
   obj[i].putdata();
 }
}
