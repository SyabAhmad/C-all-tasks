#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
using namespace std;
class Bank
{
	protected:
		string name;
		string pin;
		string balance;
		string number;
		char ch;
		char a = 209;
	public:
		void input()
		{
			cout<<"\n\n\t\t\t\tEnter Name: ";
			getline(cin,name);
			cout<<"\n\n\t\t\t\tEnter Pin: ";
			for(int i=0;i<4;i++)
			{
				ch = getch();
				pin += ch;
				cout<<"#";
				
			}
		}
		void panel();
		void login();
		void account();
		void signup();
};


	void Bank::panel()
	{
		pan:
			int opt;
		cout<<"\n\n\t\t\t\tControl Panel"<<endl;
		cout<<"[1] Log In"<<endl;
		cout<<"[2] Sign up"<<endl;
		cout<<"[0] exit"<<endl;
		cin>>opt;
		switch(opt)
		{
			case 1:
				login();
			break;
			case 2:
				signup();
			break;
			case 3:
				cout<<"Exiting...."<<endl;
			break;
			default:
				cout<<"invalid arguments"<<endl;
				goto pan;
			break;
		}
	}
	
	void Bank::signup()
	{
		string u_pin;
		cout<<"Enter Pin again to Confirm."<<endl;
		cout<<"PIN";
		for(int i=0;i<4;i++)
		{
			ch = getch();
			u_pin += ch;
			cout<<"#";
				
		}
		fstream file;
		file.open("data.text",ios::in);
		file>>name>>pin>>number>>balance;
		while(!file.eof())
		{
			if(u_pin == pin)
			{
				cout<<"welcome back"<<endl;
				file>>name>>pin>>number>>balance;
				account();
			}
			else
			{
				cout<<"Incorrect pin code or create account";
			}
		}
		
	}

	void Bank::login()
	{
		cin.ignore();
		Bank::input();
		signup();
	}
	
	
	void Bank::account()
	{
		
		cout<<"\n\n\t\t\t\tYou Account"<<endl;
		
	}
	
int main()
{
	Bank bank;
	bank.panel();
} 
