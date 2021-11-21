#include <iostream>
#include <cstdio>
using namespace std;
struct info
{
	private:
	int classNO;
	char name [20];
	char sem[20];
	float gpa;
	char dep[50];
	public:
	void x()
	{
		cout<<"Enter your class number : ";
		cin>>classNO;
		cout<<"Enter your name : ";
		cin.ignore();
		cin.getline(name,20);
		cout<<"Which department are you from : ";
		cin.getline(dep,50);
		cout<<"Semester No : ";
		cin.getline(sem,20);
		
		
	}
	void p()
	{
		cout<<"Your class number is : "<<classNO;
		cout<<endl<<"Your name is : "<<name;
	}
};