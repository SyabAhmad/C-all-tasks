#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;
string manu;
class paint
{
	protected:
		string name;
		string code;
		float price;
		float quantity;
	public:
		void panel();
		void admin();
		void customer();
		void exit();
		void insert();
		void search();
		void update();
		void display();
};
	void paint::panel()
	{
		int opt;
		string email;
		char ch;
		string pass;
		system("cls");
		again:
		cout<<"\n\n\t\t\tControl Panel"<<endl;
		cout<<"\n\n\t\t[1] Admin panel"<<endl;
		cout<<"\n\n\t\t[2] Custoemr Panel"<<endl;
		cout<<"\n\n\t\t[3] Exit"<<endl;
		cout<<"\n\n\t\tYour Choice....";
		cin>>opt;
		switch (opt)
		{
			case 1:
				cout<<"Login to your account:"<<endl;
				cin.ignore();
				cout<<"Email: ";
				getline(cin,email);
				cout<<"Password: ";
				for(int i=1;i<=4;i++)
				{
					ch = getch();
					pass += ch;
					cout<<"*";
				}
				if(email == "syab@gmail.com" && pass == "syab")
				admin();
				else
				cout<<"Email or password is incorrect"<<endl;
			break;
			case 2:
				customer();
			break;
			case 3:
				exit();
			break;
			default:
				cout<<"Invalid arguments"<<endl;
			goto again;
			break;
		}
	}
	
	void paint::admin()
	{
		int opt;
		admin_panel:
		system("cls");
		cout<<"\n\n\t\tAdmin Panel"<<endl;
		cout<<"\n\n\t\t[1] Add new paint"<<endl;
		cout<<"\n\n\t\t[2] search paint"<<endl;
		cout<<"\n\n\t\t[3] update paint"<<endl;
		cout<<"\n\n\t\t[4] Go BAck to Admin Panel"<<endl;
		cin>>opt;
		switch (opt)
		{
			case 1:
				insert();

			break;
			case 2:
				search();

			break;
			case 3:
				update();
			break;
			case 4:
				goto admin_panel;
			break;
		}
		
	}
	void paint::customer()
	{
		int opt;
		system("cls");
		cout<<"\n\n\t\tcustomer Panel"<<endl;
		cout<<"\n\n\t\t[1] Display paint"<<endl;
		cout<<"\n\n\t\t[2] Order Booking"<<endl;
		cout<<"\n\n\t\t[3] Check Order"<<endl;
		cin>>opt;
		switch (opt)
		{
			case 1:
				display();
			break;
			case 3:
				cout<<"\n\n\t\t comming soon"<<endl;
			break;
			case 2:
				cout<<"\n\n\t\t comming soon"<<endl;
			break;
			case 4:
				cout<<"\n\n\t\t Go BAck to Admin Panel"<<endl;
			break;
		}
	}
	
	void paint::exit()
	{
		cout<<"Exiting....";
	}
	
	void paint::insert()
	{
			p:
		system("cls");
		string n;
		string c;
		float q;
		float p;
		fstream file;
		cout<<"\n\t\t\tadd new Panit"<<endl;
		cout<<"\t\t\tPaint Code: ";
		cin>>code;
		cout<<"\t\t\tPaint Name: ";
		cin>>name;
		cout<<"\t\t\tPaint Price: ";
		cin>>price;
		cout<<"\t\t\tPaint Quantity: ";
		cin>>quantity;
		file.open("paint.txt",ios::in);
		if(!file)
		{
			file.open("paint.text",ios::app | ios::out);
			file <<" "<<code <<" "<<name <<" "<<price <<" "<<quantity<<"\n";
			file.close();
		}
		else
		{
			file>>n>>c>>p>>q;
			while(!file.eof())
			{
				if(c == code)
				{
					cout<<"Paint Code already Exist"<<endl;
					goto p;
				}
				file>>n>>c>>p>>q;
			}
			file.open("paint.text",ios::app | ios::out);
			file <<" "<<code <<" "<<name <<" "<<price <<" "<<quantity<<"\n";
			file.close();
			cout<<"Paint Data Successfully Added"<<endl;
			admin();
		}
		cin.ignore();
		cout<<"Press Enter To go back to main manu";
		getline(cin,manu);
		panel();
	}
	
	void paint::search()
	{
		fstream file;
		string c;
		int found = 0;
		cout<<"Search Paint"<<endl;
		cout<<"Paint Code to search: ";
		cin>>c;
		file.open("paint.text"), ios::in;
		if(!file)
		admin();
		else
		{
			file>>code>>name>>price>>quantity;
			while(!file.eof())
			{
				if(c == code)
				{
					cout<<"Search Paint"<<endl;
					cout<<"Paint found"<<endl;
					cout<<"Paint Code: "<<code<<endl;
					cout<<"Paint Name: "<<name<<endl;
					cout<<"Paint Price: "<<price<<endl;
					cout<<"Paint Quantity: "<<quantity<<endl;
					found++;
				}
				file>>code>>name>>price>>quantity;
			}
			file.close();
			if(found == 0)
			{
				cout<<"Paint not found: "<<endl;
			}
		}
		cin.ignore();
		cout<<"Go back to Manu";
		getline(cin,manu);
		panel();
	}
	
	void paint::update()
	{
		fstream file,file1;
		string c;
		string n;
		float p;
		float q;
		int found = 0;
		cout<<"Update Paint record"<<endl;
		cout<<"Enter Code: ";
		cin>>c;
		file.open("paint.text",ios::in);
		if(!file)
		admin();
		else
		{
			file1.open("paint1.text", ios::app | ios::out);
			file>>code>>name>>price>>quantity;
			while(!file.eof())
			{
				if(c == code)
				{
					cout<<"Enter Name: ";
					cin>>n;
					cout<<"Enter Price: ";
					cin>>p;
					cout<<"Enter Quantity: ";
					cin>>q;
					file1<<" "<<code<<" "<<n<<" "<<p<<" "<<q;
					found++;
				}
				else
				{
					file1<<" "<<code<<" "<<n<<" "<<p<<" "<<q;
					file1>>code>>name>>price>>quantity;
				}
			}
				file.close();
				file1.close();
				remove("paint.text");
				rename("paint1.text","paint.text");
				if(found == 0)
				{
					cout<<"Code not found"<<endl;
				}
		}
		cin.ignore();
		cout<<"Press Enter To go back to main manu";
		getline(cin,manu);
		panel();
	}
	
	void paint::display()
	{
		cin.ignore();
		cout<<"Press Enter To go back to main manu";
		getline(cin,manu);
		panel();
	}
	
int main()
{
	paint p;
	p.panel();
}
