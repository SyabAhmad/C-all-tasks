#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

int opt;
string number;
string name;
string mail;
char a = 219;

class contact_saver///////////////////////////////////////////////////////////////////////////CLASS
{
	protected:
		string name;
		string email;
		string number;
	public:
		void panel();
		void admin_panel();
		void customer_panel();
		void add_contacts();
		void display_contact();
};

	void contact_saver::panel()///////////////////////////////////////////////////////////////////////////////////// panel
	{
		top:
		int opt;
		cout<<"\n\n\t\t\tControl Panel"<<endl;
		cout<<"\t\t\t\t\t\t[1] admin panel"<<endl;
		cout<<"\t\t\t\t\t\t[2] customer panel"<<endl;
		cout<<"\t\t\t\t\t\t[3] Shut down"<<endl;
		cin>>opt;
		switch (opt)
		{
			case 1:
				admin_panel();
			break;
			case 2:
				customer_panel();
			break;
			case 3:
				cout<<"\t\t\t\t\t\texiting....";
				for(int i=0;i<15;i++)
				{
					cout<<a;
				}
			break;
			default:
				cout<<"\t\t\t\t\t\tinvalid Arugumnets.."<<endl;
				goto top;
		}
	}
	
	void contact_saver::admin_panel()/////////////////////////////////////////////////////////////////////////////////////admin panel
	{
		cout<<"\n\n\t\t\tAdmin panel"<<endl;
		cout<<"\t\t\t\t\t\t[1] Add contacts"<<endl;
		cout<<"\t\t\t\t\t\t[2] Search Contacts"<<endl;
		cout<<"\t\t\t\t\t\t[3] Update Contact"<<endl;
		cout<<"\t\t\t\t\t\t[4] Display contacts"<<endl;
		cout<<"\t\t\t\t\t\t[0] Exit..."<<endl;
		cin>>opt;
		switch (opt)
		{
			case 1:
				cout<<"\t\t\t\t\t\tAdd contacts"<<endl;
				add_contacts();
			break;
			case 2:
				cout<<"\t\t\t\t\t\tsearch contacts"<<endl;
			break;
			case 3:
				cout<<"\t\t\t\t\t\tupdate contacts"<<endl;
			break;
			case 4:
				cout<<"\t\t\t\t\t\tDisplay contacts"<<endl;
			break;
			case 0:
				cout<<"\t\t\t\t\t\texit"<<endl;
			break;
		}
	}
	
	void contact_saver::customer_panel()/////////////////////////////////////////////////////////////////////////////////////customer panel
	{
		int opt;
		cout<<"\n\n\t\t\t\t\t\tCustomer control panel"<<endl;
		cout<<"\t\t\t\t\t\t[1] display contacts"<<endl;
		cout<<"\t\t\t\t\t\t[2]Exit...."<<endl;
		cin>>opt;
		switch (opt)
		{
			case 1:
				cout<<"\t\t\t\t\t\tDisplay contacts"<<endl;
				display_contact();
			break;
			case 2:
				cout<<"\t\t\t\t\t\tExiting...."<<endl;
			break;
		}
	}
		void contact_saver::add_contacts()/////////////////////////////////////////////////////////////////////////////////////add contacts
		{
			add:
			cin.ignore();
			string n;
			string nu;
			string m, enter;
			fstream file;
			p:
			cout<<"\t\t\t\t\t\tEnter Name: ";
			getline(cin,name);
			cout<<"\t\t\t\t\t\tEnter Number: ";
			getline(cin,number);
			cout<<"\t\t\t\t\t\tEnter Email-Address: ";
			getline(cin,mail);
			file.open("data.text",ios::app | ios::out);
			if(!file)
			{
				file.open("Data.text",ios::app | ios::out);
				file <<" " << name <<" " <<number <<" "<<mail;
				file.close();
			}
			else
			{
				file>>n>>nu>>m;
				while(!file.eof())
				{
					if(n == name)
					{
						cout<<"name already exist"<<endl;
						goto p;
					}
					file>>m>>nu>>m;
				}
				file.open("Data.text",ios::app | ios::out);
				file <<" "<<name<<" "<<number<<" "<<mail;
				file.close();
			}
			cout<<"Press Enter to go Back......";
			getline(cin,enter);
			panel();
			
			cout<<"You want to add onther contact or want to go to home..?"<<endl;
			cout<<"[1] Add contact"<<endl;
			cout<<"[2] Home"<<endl;
			switch (opt)
			{
				case 1:
					goto add;
				break;
				case 2:
					panel();
				break;
				default:
					cout<<"invalid arguments"<<endl;
			 } 
		}

		void contact_saver::display_contact()//////////////////////////////////////////////////////////////////////////////display contacts
		{
			fstream file;
			file.open("Data.text"),ios::in;
			if (file.fail())
			{
				cerr<<"\t\t\t\t\t\tFile can not be open";
			}
			else
			{
				file>>name>>number>>mail;
				while(!file.eof())
				{
					cout<<"\t\t\t\t\t\t******************************"<<endl;
					cout<<"\t\t\t\t\t\tName: "<<name<<endl;
					cout<<"\t\t\t\t\t\t******************************"<<endl;
					cout<<"Number: ERROR: 13b*!"<<endl;
					cout<<"mail: ERROR: 14b*!"<<endl;
					cout<<"ERROR: 13b*! Contact Admin/owner or log_in";
					file>>name>>number>>mail;
				}
			}
		}

int main()///////////////////////////////////////////////////////////////////////////////////////////main function
{
		system("color 2");
		//cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t------------------"<<endl;
		cout<<"\t\t\t\t\t\t||--------------||"<<endl;
		cout<<"\t\t\t\t\t\t||Starting...   ||\n";
		cout<<"\t\t\t\t\t\t||Phone Book\t||\n";
		cout<<"\t\t\t\t\t\t||--------------||"<<endl;
		cout<<"\t\t\t\t\t\t------------------"<<endl;
		cout<<"\t\t\t\t\t\t";
		for(int i=0;i<18;i++)
		{
			Sleep(200);
//			cout<<".";
			cout<<a;
	
		}
		system("cls");
		system("color 2");
		contact_saver contact;
		contact.panel();
		
	return 0;
}
