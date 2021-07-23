#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
using namespace std;
class GOVT
{
	protected:
		string name;
		string user_name;
		string user_pin;
		string u_name;
		string u_pin;
		int d_amount;
		int w_amount;
		double balance = 0;
		string address;
		int number;
		int opt;
		string ans;
		string distance;
		char ch;
	public:
		void input()
		{
			cin.ignore();
			cout<<"\n\nName: ";
			getline(cin,name);
			cout<<"address: ";
			getline(cin,address);
			cout<<"Number: ";
			cin>>number;
		}
		void user_input()
		{
			cout<<"Name: ";
			getline(cin,user_name);
			cout<<"PIN: ";
			for(int i=0;i<8;i++)
			{
				ch = getch();
				user_pin += ch;
				cout<<"*";
			}
		}
		void u_input()
		{
			cout<<"Name: ";
			getline(cin,u_name);
			cout<<"PIN: ";
			for(int i=0;i<8;i++)
			{
				ch = getch();
				u_pin += ch;
				cout<<"*";
			}
		}
		void control_panel();
};

class Hospital_panel:public GOVT
{
	public:
		string ans;
		void input()
		{
			cout<<"Hospital Panel "<<endl;
			cout<<"Only Ambulance availible at the time."<<endl;
			cout<<"Press enter to continue"<<endl;
			getline(cin,ans);
			cout<<"Please Enter informaion Carrectly"<<endl;
			GOVT::input();
		}
		void ambulance();
};

class water_supply_panel:public GOVT
{
	public:
		void input()
		{
			int opt;
			again_water:
			cout<<"\n\nWater Supply Panel"<<endl;
			cout<<"[1] Need one time water tank"<<endl;
			cout<<"[2] Need a pipe line for your home or industry"<<endl;
			cout<<"[3] or Need a firebregade 'urgent'"<<endl;
			cin>>opt;
			switch(opt)
			{
				case 1:
					one_time();
				break;
				case 2:
					pipe_line();
				break;
				case 3:
					fire_bregade();
				break;
				default:
					cout<<"Invalid Arguments"<<endl;
					cout<<"TRY AGAIN"<<endl;
					goto again_water;
				break;
			}
		}
		void one_time();
		void pipe_line();
		void fire_bregade();
};

class Electric_panel:public GOVT
{
	public:
		void input()
		{
			again_electric:
			cout<<"Electric_panel"<<endl;
			cout<<"[1] make a connection"<<endl;
			cout<<"[2] make a disconnection"<<endl;
			cout<<"[3] rtepair a connection"<<endl;
			cin>>opt;
			switch(opt)
			{
				case 1:
					connection();
				break;
				case 2:
					disconnection();
				break;
				case 3:
					repair();
				break;
				default:
					cout<<"Invalid Arguments"<<endl;
					cout<<"TRY AGAIN"<<endl;
					goto again_electric;
				break;
					
			}
		}
		void connection();
		void disconnection();
		void repair();
};

class Bank_panel:public GOVT
{
	public:
		void input()
		{
			top:
			cout<<"BANK managment SYSTEM"<<endl;
			cout<<"[1] Create Account"<<endl;
			cout<<"[2] Login to your account"<<endl;
			cin>>opt;
			switch(opt)
			{
				case 1:
					create_account();
				break;
				case 2:
					login_account();
				break;
				default:
					cout<<"INvalid Arguments"<<endl;
					cout<<"try again"<<endl;
					goto top;
				break;
			}
		}
		void create_account();
		void login_account();
};

class account_detail:public Bank_panel
{
	public:
		void input()
		{
			top:
			cout<<"Welcome To Your Account"<<endl;
			cout<<"[1] deposit amount"<<endl;
			cout<<"[2] Withdrow amount"<<endl;
			cout<<"[3] Balance inquiry"<<endl;
			cin>>opt;
			switch (opt)
			{
				case 1:
					deposit_amount();
				break;
				case 2:
					withdrow_amount();
				break;
				case 3:
					balance_inquiry();
				break;
				default:
					cout<<"INvalid Arguments"<<endl;
					cout<<"try again"<<endl;
					goto top;
				break;
			}
		}
		void deposit_amount();
		void withdrow_amount();
		void balance_inquiry();
};

	void GOVT::control_panel()//////////////////////////////////control panel
	{
		Hospital_panel  hp;
		water_supply_panel wsp;
		Electric_panel ep;
		Bank_panel bp;
		panel:
		int opt;
		cout<<"\n\nControl Panel"<<endl;
		cout<<"[1] Hospital panel"<<endl;
		cout<<"[2] water Supply panel"<<endl;
		cout<<"[3] Electric panel"<<endl;
		cout<<"[4] Bank panel"<<endl;
		cin>>opt;
		switch(opt)
		{
			case 1:
				hp.input();
				hp.ambulance();
			break;
			case 2:
				wsp.input();
			break;
			case 3:
				ep.input();
			break;
			case 4:
				bp.input();
			break;
			default:
				cout<<"Invalid Arguments"<<endl;
				cout<<"TRY AGAIN"<<endl;
				goto panel;
			break;
		}
	}
	
	
	void Hospital_panel::ambulance()/////////////////Hospital==>ambulance
	{
		system("cls");
		//Hospital_panel::input();
		cout<<"We just noted your area '"<<name<<"' we will be thier in a moment"<<endl;
		control_panel();
	}
	
	void water_supply_panel::one_time()////////////////water supply on time
	{
		system("cls");
		GOVT::input();
		cout<<"Area Noted:"<<endl;
		cout<<"we will be their in a moment"<<endl;
		control_panel();
	}
	void water_supply_panel::pipe_line()//////////////////water supply pipe line
	{
		system("cls");
		cin.ignore();
		string distance;
		cout<<"water_supply_panel 'pipe_line'"<<endl;
		GOVT::input();
		cout<<"Enter Distance between you and near tubewell center"<<endl;
		getline(cin,distance);
		cout<<"Your Problem Noted successfully"<<endl;
		cout<<"Work will start in next week'INN SHAA ALLAH'"<<endl;
		control_panel();
	}
	void water_supply_panel::fire_bregade()/////////water supply fire bregade
	{
		system("cls");
		int perc;
		int randm;
		cin.ignore();
		cout<<"water_supply_panel 'Fire Bregade'"<<endl;
		GOVT::input();
		cout<<"guess How many Fire is it: (30%,70% or above)"<<endl;
		cin>>perc;
		randm = (rand()%5) ;
		cout<<randm<<" number of firebregades are on the way "<<endl;
		control_panel();
	}
	
	void Electric_panel::connection()
	{
		system("cls");
		cin.ignore();
		cout<<"Making a requst for connection"<<endl;
		GOVT::input();
		cout<<"Distance between you and near Exchange .?"<<endl;
		cin>>distance;
		cout<<"we will try to reach you MR."<<name<<"as soon as possible"<<endl;
		cout<<"In the next week you will have a secure connection"<<endl;
		control_panel();
	}
	void Electric_panel::disconnection()
	{
		system("cls");
		cin.ignore();
		cout<<"Making a requst for disconnection"<<endl;
		cout<<"why are you want to disconnect our service (feedback in one line)"<<endl;
		getline(cin,ans);
		cout<<"Enter The informtion correctly"<<endl;
		GOVT::input();
		cout<<"Your Connection will be disconnected very soon"<<endl;
		control_panel();
	}
	void Electric_panel::repair()
	{
		system("cls");
		cin.ignore();
		cout<<"Making a requst for repairing of connection"<<endl;
		cout<<"why is our service damage due to high load or any thing else (feedback in one line)"<<endl;
		getline(cin,ans);
		GOVT::input();
		cout<<"We will start work as soon as possible"<<endl;
		control_panel();
	}
	
	void Bank_panel::login_account()
	{
		account_detail ad;
		system("cls");
		cin.ignore();
		cout<<"Welcome To Bank Managment System "<<endl;
		GOVT::u_input();
		fstream file;
		file.open("user_data.text",ios::out);
		file >> user_name >> user_pin >> balance;
		while(!file.eof())
		{
			if(u_name == user_name && u_pin == user_pin)
			{
				cout<<"sfsdfsdfsdfsfsfsf"<<endl;
				ad.input();
				file >> user_name >> user_pin >> balance;
			}
			else
			{
				
				create_account();
			}
			file >> user_name >> user_pin >> balance;
		}
	}
	
	void Bank_panel::create_account()
	{
		cin.ignore();
		account_detail ad;
		cout<<"Welcome To Bank Managment System"<<endl;
		cout<<"Create you account in just two steps"<<endl;
		GOVT::user_input();
		fstream file;
		file.open("user_data.text",ios::app | ios::in);
		file<< user_name<<" "<< user_pin<<" "<<balance <<"\n";
		cout<<"user data saved successfully"<<endl;
		file.close();
		ad.input();
		
	}
	
	void account_detail::deposit_amount()
	{
		system("cls");
		cin.ignore();
		cout<<"Enter amount to deposit to your account";
		cin>>d_amount;
		fstream file;
		balance += d_amount;
		file.open("user_data.text",ios::app | ios::in);
		file<< user_name<<" "<< user_pin<<" "<<balance <<"\n";
		cout<<d_amount <<" has been deposited to you account";
		Bank_panel::input();
	}
	void account_detail::withdrow_amount()
	{
		system("cls");
		cin.ignore();
		cout<<"Enter amount to withdrow from your account";
		cin>>w_amount;
		fstream file;
		balance -= w_amount;
		file.open("user_data.text",ios::app | ios::in);
		file<< user_name<<" "<< user_pin<<" "<<balance <<"\n";
		cout<<w_amount <<" has been withdrow from your account";
		Bank_panel::input();
	}
	void account_detail::balance_inquiry()
	{
		system("cls");
		cout<<"\n\n\t\tBalance inquiry"<<endl;
		fstream file;
		file.open("user_data.text",ios::app | ios::out);
		file >> user_name >> user_pin >> balance;
		cout<<"Your Balance "<<balance<<endl;
	}
	
int main()
{
	GOVT govt;
	govt.control_panel();
	return 0;
}
