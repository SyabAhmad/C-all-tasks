#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

class hospital//////////////////////////hospital Class
{
	protected:
		string name;
		string id;
		string d_name;
		string d_id;
		string study;
		int opt;
	public:
		void input()
		{
			cout<<"Name: ";
			getline(cin,name);
			cout<<"ID: ";
			getline(cin,id);
		}
		void control_panel();
};

class Admin:public hospital//////////////////////////Admin Class
{
	public:
		void input()
		{
			c_panel:
			cin.ignore();
			hospital::input();
			if(name=="ahmad" && id=="ahmad")
			{
				cout<<"Welcome Back Sir : "<<name<<endl;
				cout<<"Select one of the following option to procced"<<endl;
				cout<<"1- Add Doctor"<<endl;
				cout<<"2- Remove Doctor"<<endl;
				cout<<"3- Exit"<<endl;
				cin>>opt;
				switch(opt)
				{
					case 1:
						add_doctor();
					break;
					case 2:
					//	rem_doctor();
					break;
					case 3:
						goto c_panel;
					break;
					default:
						cout<<"invalid Arguments"<<endl;
					goto c_panel;
					break;
				}
			}
			else
			{
				cout<<"Incorrect ID or Name"<<endl;
				goto c_panel;
			}
		}
		void add_doctor();
		void rem_doctor();
};

class Doctor:public hospital//////////////////////////Doctor Class
{
	public:
		void input()
		{
			cin.ignore();
			hospital::input();
		}
};

class User:public hospital//////////////////////////User Class
{
	public:
		void input()
		{
			cin.ignore();
			hospital::input();
		}
};
	void hospital::control_panel()
	{
		Admin admin;
		Doctor doctor;
		User user;
		c_panel:
		system("cls");
		system("TITLE Hospital managment system");
		cout<<"\n\n\t\t\tWelcome\n*************\nControl Panel"<<endl;
		cout<<"1- As Admin"<<endl;
		cout<<"2- As Doctor"<<endl;
		cout<<"3- As User OR Patient"<<endl;
		cin>>opt;
		switch(opt)
		{
			case 1:
				admin.input();
			break;
			case 2:
				//doctor.input();
			break;
			case 3:
				//user.input();
			break;
			default:
				cout<<"invalid Arguments"<<endl;
				goto c_panel;
			break;
		}
	}
	
	void Admin::add_doctor()
	{
		cin.ignore();
		cout<<"add Doctor Panel "<<endl;
		cout<<"Name of Doctor: ";
		getline(cin,d_name);
		cout<<"ID of Doctor: ";
		getline(cin,d_name);
		cout<<"Spacilaization of Doctor: ";
		getline(cin,d_name);
		fstream file;
		file.open( "doctor.text",ios::app | ios::in);
		file<<" "<<d_name<<" "<<d_id<<" "<<study<<"\n";
		cout<<"Name : "<<d_name<<endl;
		cout<<"ID : "<<d_id<<endl;
		cout<<"Spaceilaization : "<<study<<endl;
		cout<<"Data Saved successfully"<<endl;
		file.close();
		
		
	}
	
int main()
{
	hospital hms;
	hms.control_panel();
}
