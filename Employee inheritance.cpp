#include <iostream>
using namespace std;
class Employee
{
	protected:
		string Name;
	public:
		string N = Name;
		void input()
		{
			cout<<"Enter Your Name: ";getline(cin,Name);;
		}	
		void output()
		{
			cout<<"New Employee Name: "<<Name<<endl;
		}
};
class Registeration:public Employee
{
	public:
		string registeration_number;
		string destination;
		void input()
		{
			Employee::input();
			cout<<"Enter Your Registeration Number: ";getline(cin,registeration_number);
			cout<<"Enter Your Destination: ";getline(cin,destination);
		}
		void output()
		{
			Employee::output();
			cout<<"Enter Your Registeration Number: "<<registeration_number<<endl;
			cout<<"Enter Your Destination: "<<destination<<endl;
		}
};
class Human_resource_allowanece:public Employee
{
	public:
		string human_resource_allowanece;
		string basic_salary;
		string profitable_fund;
		void input()
		{
			cout<<"Your Human_resource_allowanece : ";getline(cin,human_resource_allowanece);
			cout<<"Enter your Basic salary : ";getline(cin,basic_salary);
			cout<<"Your Profitable Fund : ";getline(cin,profitable_fund);
		}
		void output()
		{
			Employee::output();
			cout<<"Your Human_resource_allowanece : "<<human_resource_allowanece<<endl;
			cout<<"Your Basic salary : "<<basic_salary<<endl;
			cout<<"Your Profitable Fund : "<<profitable_fund<<endl;
		}
};
int main()
{
	Registeration Reg;
	Human_resource_allowanece hra;
	Reg.input();
	hra.input();
	hra.output();
	Reg.output();
	return 0;
}

//		
