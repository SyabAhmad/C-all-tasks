#include <iostream>
using namespace std;

class car
{
	protected:
		double speed;
		double fuel_quantity;
		string color;
	public:
		void input()
		{
			cout<<"Speed: ";
			cin>>speed;
			cout<<"fuel quantity: ";
			cin>>fuel_quantity;
			cout<<"Color: ";
			cin.ignore();
			getline(cin,color);
		}
		void output()
		{
			cout<<endl;
			cout<<"------------------------------------------------------"<<endl;
			cout<<"Speed : "<<speed<<endl;
			cout<<"fuel quantity : "<<fuel_quantity<<endl;
			cout<<"color : "<<color<<endl;
			cout<<"------------------------------------------------------"<<endl;
		}
};

class Honda: public car
{
	public:
		string mod;
		void input()
		{
			cout<<"------------------------------------------------------"<<endl;
			cin.ignore();
			cout<<"Mod of the Bike (Auto or manual)";
			getline(cin,mod);
			car::input();
		}
		void output()
		{
			cout<<"Your Bike is: "<<mod;
		}
};

class civic: public Honda
{
	public:
		void input()
		{
			Honda::input();
			car::input();
		}
		void output()
		{
			car::output();
			Honda::output();
		}
};
int main()
{
	civic civi;
	int answer;
	cout<<"[1] Car\n[2] Bike"<<endl;
	cout<<"Your Choice: ";
	cin>>answer;
	switch (answer)
	{
		case 1:
			cin.ignore();
			car::input();
			car::output();
		break;
		case 2:
			cin.ignore();
			Honda::input();
			Honda::output();
		break;
	}
}
