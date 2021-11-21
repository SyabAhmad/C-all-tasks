//Name = Syed syab ahmad shah
//Roll number = 206174
//Bs Software Engineering
#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>
void intro();
using namespace std;
class Calculation
{
	protected:
		float first_value;
		float second_value;
	public:
		int x = first_value;
		int y = second_value;
		void input()
		{
			cout<<"\t\t\t\t\tEnter 1st value: ";cin>>x;
			cout<<"\t\t\t\t\tEnter 2nd value: ";cin>>y;
			
		}
//		void output()
//		{
//			cout<<"1st value: "<<first_value<<endl;
//			cout<<"2nd value: "<<second_value<<endl;
//		}
};
class addition:public Calculation
{
	public:
		int sum;
		void input()
		{
			
			Calculation::input();
		}
		void output()
		{
			sum = x + y;
			cout<<"\t\t\t\t\tSum : "<<sum<<endl;
		}
		
};
class Multiplication:public Calculation
{
	public:
		int Multiplication;
		void input()
		{
			
			Calculation::input();
		}
		void output()
		{
			Multiplication = x * y;
			cout<<"\t\t\t\t\tMultiplecataion : "<<Multiplication<<endl;
		}
		
};
class Subtrection:public Calculation
{
	public:
		int Subtrection;
		void input()
		{
			
			Calculation::input();
		}
		void output()
		{
			Subtrection = x - y;
			cout<<"\t\t\t\t\tSubtrection : "<<Subtrection<<endl;
		}
		
};
class Division:public Calculation
{
	public:
		int Division;
		void input()
		{
			
			Calculation::input();
		}
		void output()
		{
			Division = x / y;
			cout<<"\t\t\t\t\tDivision : "<<Division<<endl;
		}
		
};
int main()
{
	addition add;
	Subtrection sub;
	Multiplication multi;
	Division div;
	int answer;
	char a = 30;
	char b = 31;
	char c = 219;
	intro();
	top:
	cout<<"\t\t\t\t\t************************************"<<endl<<endl;
	cout<<"\t\t\t\t\t||\t[1]Addition \t\t  ||\n\t\t\t\t\t||\t[2]Subtraction\t\t  ||\n\t\t\t\t\t||\t[3]Multiplication \t  ||\n\t\t\t\t\t||\t[4]Division\t\t  ||\n";	
	cout<<"\n\t\t\t\t\t************************************"<<endl;
	cout<<"\n\t\t\t\t\tEnter your choice: ";cin>>answer;
	switch (answer)
		{
			case 1:
				add.input();
				add.output();
				for(int i=0;i<3;i++)
				{
					system("cls");
					cout<<"\t\t\t\t\tloading..";
					Sleep(700);
					system("cls");
					cout<<"\t\t\t\t\tloading...";
					Sleep(700);
					system("cls");
					cout<<"\t\t\t\t\tloading....";
					Sleep(700);
					system("cls");
					cout<<"\t\t\t\t\tloading.....";
					Sleep(700);
					system("cls");
					cout<<"\t\t\t\t\tloading......";
					Sleep(700);
					system("cls");
					
					
				}
				system("cls");
				goto top;
			break;
			case 2:
				sub.input();
				sub.output();
				cout<<"\t\t\t\t\tLoading  ";
				for(int i=0;i<8;i++)
				{
					Sleep(600);
					cout<<a;
					Sleep(600);
					cout<<b;
				}
				cout<<endl;
				system("cls");
				goto top;
			break;
			case 3:
				multi.input();
				multi.output();
				cout<<"\t\t\t\t\tLoading.. ";
				for(int i=0;i<8;i++)
				{
					Sleep(600);
					cout<<c;
				}
				cout<<endl;
				system("cls");
				goto top;
			break;
			case 4:
				div.input();
				div.output();
				cout<<"\t\t\t\t\tLoading.. ";
				for(int i=0;i<8;i++)
				{
					Sleep(600);
					cout<<c;
					cout<<":";
				}
				cout<<endl;
				system("cls");
				goto top;
			break;
		}
		cout<<"\n\n\t\t***Created by*** \n\t\t\tName = Syed syab ahmad shah \n\t\t\tRoll number = 206174 \n\t\t\tBs Software Engineering"<<endl;

}
void intro()
{
	cout<<"\n\n\n\n";
	cout<<"\t\t\t\t\tC";
	Sleep(400);
	cout<<"R";
	Sleep(400);
	cout<<"E";
	Sleep(400);
	cout<<"A";
	Sleep(400);
	cout<<"T";
	Sleep(400);
	cout<<"E";
	Sleep(400);
	cout<<"D";
	Sleep(400);
	cout<<" B";
	Sleep(400);
	cout<<"Y";
	Sleep(800);
	cout<<" S";
	Sleep(400);
	cout<<"Y";
	Sleep(400);
	cout<<"A";
	Sleep(400);
	cout<<"B";
	Sleep(600);
	cout<<" A";
	Sleep(400);
	cout<<"H";
	Sleep(400);
	cout<<"M";
	Sleep(400);
	cout<<"A";
	Sleep(400);
	cout<<"D";
	Sleep(1200);
	system("cls");
	
}
