#include<iostream.h>
#include<conio.h>
//OPERATOR OVERLOADING
class ABC
{
 int n1,n2;
 public:void getnumbers(int a,int b);
	void display();
	void operator -();

};
void ABC::getnumbers(int a,int b)
{
 n1=a;
 n2=b;
}
void ABC::display()
{
 cout<<n1<<endl;
 cout<<n2<<endl;
}
void ABC::operator -()
{
 n1=-n1;
 n2=-n2;
}
void main()
{
 ABC obj;
 obj.getnumbers(3,-90);
 cout<<"before overloading";
 obj.display();
 -obj;
 cout<<"after overloading";
 obj.display();
}