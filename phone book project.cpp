#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

int opt;
string number;
string name;
string mail;
class start
{
	public:
		char a = 219;
		void output()
		{
		system("color 2");
		//cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"------------------"<<endl;
		cout<<"||--------------||"<<endl;
		cout<<"||Starting...   ||\n";
		cout<<"||Phone Book\t||\n";
		cout<<"||--------------||"<<endl;
		cout<<"------------------"<<endl;
		for(int i=0;i<18;i++)
		{
			Sleep(200);
//			cout<<".";
			cout<<a;
	
		}
		system("cls");
		system("color 2");
		}
};


class add_contact
{
	public:
		void input()
		{
			cin.ignore();
			ofstream obj("Data.text",ios::app);
			cout<<"Enter Name: ";
			getline(cin,name);
			cout<<"Enter Number: ";
			getline(cin,number);
			cout<<"Enter Email-Address: ";
			getline(cin,mail);
			obj <<endl << name <<endl <<number <<endl <<mail;
			cout<<endl<<endl<<endl;
		}
};

class display_contact
{
	public:
		void output()
		{
			ifstream obj;
			obj.open("Data.text");
			if (obj.fail())
			{
				cerr<<"File can not be open";
			}
			else
			{
				while(!obj.eof())
				{
					obj >> name;
					obj >> number;
					obj >> mail;
					cout<<"Name: "<<name<<endl;
					cout<<"Number: "<<number<<endl;
					cout<<"Mail: "<<mail<<endl;
				}
			}
		}
};

int main()
{
	start start1;
	start1.output();
	add_contact add;
	display_contact display;
		string name;
		string number;
		jump:
			cout<<endl;
			cout<<"||-[1] Add contact.\n";
			cout<<"||-[2] display all contact.\n";
			cout<<"||-[0] exit PhoneBook.\n";
			cin>>opt;
			switch (opt)
			{
				case 1:
					add.input();
					goto jump;
				break;
				case 2:
					display.output();
					goto jump;
				break;
				case 0:
					cout<<"Exiting...";
				break;
				default:
					cout<<"Invalid input \n";
					cout<<"Try again.";
					goto jump;
				break;
			}
			
		
	return 0;
}
