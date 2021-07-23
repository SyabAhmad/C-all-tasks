#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>
using namespace std;
class sign_up
{
	protected:
		string name;
		string pin;
		string u_name;
		string u_pin;
		bool valid;
	public:
		void signin_input()
		{
			cin.ignore();
			cout<<"Name: ";
			getline(cin,name);
			cout<<"Pin: ";
			getline(cin,pin);
			ofstream obj("User_data.text",ios::app);
			obj << name << pin;
			obj.close();
		}
		void login_input()
		{
			cin.ignore();
			cout<<"Name: ";
			getline(cin,u_name);
			cout<<"Pin: ";
			getline(cin,u_pin);
			fstream obj("User_data.text");
			while(!obj.eof())
			{
				obj << name << pin;
				if(u_name == name)
				{
					valid =true;
				}
				else
				{
					valid = false;
				}
			}
			obj.close();
			if (valid=true)
			cout<<"Welcome";
			else
			cout<<"Bad day";			
		}
};
int main()
{
	sign_up signup;
	int opt;
	cout<<" [1] sign up \n [2] login"<<endl;
	cin>>opt;
	switch (opt)
	{
		case 1:
			signup.signin_input();
		break;
		case 2:
			signup.login_input();
		break;
		default:
			cout<<"Invalid input, try again"<<endl;
		break;
	}
	return 0;
}
