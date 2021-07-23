#include <iostream>
using namespace std;
class addNumber
{
	protected:
		string Name;
		string Number;
		string email;
	public:
		void input()
		{
			cin.ignore();
			cout<<"Contact Name: ";
			getline(cin,Name);
			cout<<"Contact Number: ";
			getline(cin,Number);
		}
		void output()
		{
			cout<<"Contact Name: "<<Name<<endl;
			cout<<"Contact Number: "<<Number<<endl;
		}
};
class add_info: public addNumber
{
	public:
	string mail;
	void input()
	{
		addNumber::input();
		cout<<"E-mail adress: ";
		getline(cin,mail);
	}
	void output()
	{
		addNumber::output();
		cout<<"E-mail adress: "<<mail<<endl;
	}
};
int main()
{
	int option;
	add_info add;
	do
	{
		cout<<"[1] Add Contact"<<endl;
		cout<<"[2] List Contact"<<endl;
		cout<<"[3] Exit Contact"<<endl;
		cin>>option;
		switch (option)
		{
			case 1:
				add.input();
			break;
			case 2:
				add.output();
			break;
		}
	}while(option<4);
	return 0;
}
