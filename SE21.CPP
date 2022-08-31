#include<fstream.h>
#include<iostream.h>
#include<conio.h>
class A
{
 protected:
 char name[40];
 int age;
 public:
 void getdata()
 {
  cout<<"enter name :";
  cin.getline(name,40);
  cout<<"enter age: ";
  getch();
  cin>>age;
 }
 void display()
 {
  cout<<"name is: "<<name;
  cout<<"age is: "<<age;
 }
};
void main()
{
 clrscr();
 /*
 A obj;
 obj.getdata();
 ofstream f1("ABC.dat");
 f1.write((char *)&obj,sizeof(obj));
 obj.display();
 */



 ifstream f2("ABC.dat");
 //int buffer[2];
 A obj2;
 f2.read((char*)&obj2,sizeof(obj2));
 obj2.display();



 getch();
}

