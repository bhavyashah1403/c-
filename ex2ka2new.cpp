#include<conio.h>
#include<iostream.h>
class Student
{
  public:
  char name[20];
  int rollno;
};
class Art: public Student
{
  public:
  char stream[20];
  char div[1];
  public:
  void getdataArt()
  {
    cout<<"enter Name ";
    cin.get(name,20);
    cout<<"enter roll no: ";
    cin>>rollno;
    cout<<"enter stream: ";
    cin>>stream;
    cout<<"enter div: ";
    cin>>div;
  }
  void displayArt()
  {
    cout<<"your name is: "<<name<<endl;
    cout<<"your roll no is: "<<rollno<<endl;
    cout<<"your stream is: "<<stream<<endl;
    cout<<"your division is: "<<div<<endl;
  }
};
class Science: public Student
{
  public:
  char stream[20];
  char type[20];
};
class Commerce: public Student
{
  public:
  char stream[20];
  char elective[20];
  public:
  void getdataComm()
  {
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter roll no: ";
    cin>>rollno;
    cout<<"enter Stream: ";
    cin>>stream;
    cout<<"enter elective: ";
    cin>>elective;
  }
  void displayComm()
  {
   cout<<"your name is: "<<name<<endl;
   cout<<"your rollno is: "<<rollno<<endl;
   cout<<"your stream is: "<<stream<<endl;
   cout<<"your elective is: "<<elective<<endl;
  }
};
class Medical: public Science
{
 public:
 int cet;
 char div[1];
 public:
 void getdataMed()
 {
  cout<<"enter name: ";
  cin.getline(name,20);
  cout<<"enter roll no: ";
  cin>>rollno;
  cout<<"enter stream: ";
  cin>>stream;
  cout<<"enter type: ";
  cin>>type;
  cout<<"enter cet score: ";
  cin>>cet;
  cout<<"enter division: ";
  cin>>div;
 }
 void displayMed()
 {
  cout<<"your name is: "<<name<<endl;
  cout<<"your rollno is: "<<rollno<<endl;
  cout<<"your stream is: "<<stream<<endl;
  cout<<"your type is: "<<type<<endl;
  cout<<"your cet score is: "<<cet<<endl;
  cout<<"your divison is: "<<div<<endl;
 }
};
void main()
{ clrscr();
  Art a1;
  cout<<" data for ARTS";
  a1.getdataArt();
  a1.displayArt();
  cout<<" data for commerce";
  Commerce c1;
  c1.getdataComm();
  c1.displayComm();
  cout<<"data for medical";
  Medical m1;
  m1.getdataMed();
  m1.displayMed();
  getch();
}

