#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
struct cdata
{
 int classn;
 string name,dep;
 float gpa;
}mem;
//ftn Show data
void chkdat()
{
 cout<<"Class No : "<<mem.classn<<" | Name : "<<mem.name<<" | Department : "<<mem.dep<<" | GPA : ";
 cout<<mem.gpa<<endl;
}
//ftn write data to txt
void s_data()
{
 string g;
 cout<<"Path with name and extension to save data in : ";
 getline(cin,g);
 ofstream od;
 od.open(g);
 od<<"Class No : "<<mem.classn<<" | Name : "<<mem.name<<" | Department : "<<mem.dep<<" | GPA : ";
 od<<mem.gpa;
}
int main()
{
 int t,s;
 
 cout<<"Enter your class NO : ";
 cin>>mem.classn;
 cout<<"Enter your name : ";
 cin.ignore();
 getline(cin,mem.name);
 cout<<"Enter your department : ";
 getline(cin,mem.dep);
 cout<<"Enter your GPA : ";
 cin>>mem.gpa;
 cout<<"Want to check input data?"<<endl;
 cout<<"1 Yes"<<endl<<"2 No"<<endl;
 cout<<"Your choice : ";
 cin>>s;
 if (s==1)
 {
 chkdat();
 }
 else 
 {
 cout<<"Selected to not check input data"<<endl;
 }
 cout<<"Want to save your data to a txt file?"<<endl;
 cout<<"1 Yes"<<endl<<"2 No"<<endl;
 cout<<"Your choice : ";
 cin>>t;
 if (t==1)
 {
 s_data();
 }
 else
 {
 	cout<<"You chosen not to save data.";
 }
 return 0;
}