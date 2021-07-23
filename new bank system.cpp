#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
using namespace std;
string name;
string pin;
string user_name;
string user_pin;
int offset;
string line;
class sign_up
{
	public:
		void input()
		{
			cin.ignore();
			cout<<"Name: ";
			getline(cin,name);
			cout<<"PIN: ";
			getline(cin,pin);
			ofstream obj("data.text", ios::app);
			obj << name <<endl;
			obj << pin <<endl;
			obj.close();
			cout<<"you are now our Member"<<endl;
		}
};
class log_in
{
	public:
		void input()
		{
			cin.ignore();
			cout<<"Name: ";
			getline(cin,user_name);
			cout<<"PIN: ";
			getline(cin,user_pin);
			fstream obj("data.text",ios::out);
			while(!obj.eof())
			{
				getline(obj,line);
				if ((offset = line.find(pin,0)) != string::npos)
				{
					cout<<"Welcome";
				}
				else
				{
					cout<<"Not Found";
				}
			}
		}
			
};
int main()
{
	sign_up signup;
	log_in login;
	int opt;
	cout<<"[1] Login\n[2] Sign_up"<<endl;
	cin>>opt;
	switch (opt)
	{
		case 1:
			login.input();
		break;
		case 2:
			signup.input();
		break;
	}
}
