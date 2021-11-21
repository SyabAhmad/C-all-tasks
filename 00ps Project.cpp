///Syed Syab Ahmad Shah
///Roll number = 206174
///BS Software Engineering
#include <iostream>
#include <windows.h>
using namespace std;
void bodyguard();
void PK();
void Don();
void MBBS();
void KGF();
char a=46;
class info
{
	protected:
		string your_name;
		string movie_name;
		string movie_time;
		string movie_type;
		string seat_number;
	public:
		void input()
		{
			cout<<"Your Name: ";
			getline(cin,your_name);			
		}
		void output()
		{
			cout<<"\t\t|Hii "<<your_name<<"|\t"<<endl;				
		}
};
class add_movie:public info
{
	public:
		void input()
		{
			cout<<"\t\t\t|Movie Time|"<<endl;
			cout<<"_____________________________________________________________________"<<endl;
			cin.ignore();
			cout<<endl<<endl;
			info::input();
			cout<<"Movie Name: ";
			getline(cin,movie_name);
			cout<<"Move time (in which time do you come): ";
			getline(cin,movie_time);
			cout<<"Movie type (2D,3D): ";
			getline(cin,movie_type);
			cout<<"And your seat number (A-45 etc..): ";
			getline(cin,seat_number);
		}
		void output()
		{
			system("cls");
			info::output();
			cout<<"----------------------------------------------------------"<<endl;
			cout<<"||\tMovie Name: "<<movie_name<<endl;
			cout<<"||\tMove time (in which time do you come): "<<movie_time<<endl;
			cout<<"||\tMovie type (2D,3D): "<<movie_type<<endl;
			cout<<"||\tAnd your seat number (A-45 etc..): "<<seat_number<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			cout<<endl<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			cout<<"||\tinfo added successfully."<<endl;
			cout<<"||\tEnjoy \n||\tMust come on time otherwise your token will expire."<<endl;
			cout<<"||\tdo you want to give us feadback....if yes check out dacumentation.\n||\tThank you for choosing our plateform."<<endl;
			cout<<"----------------------------------------------------------"<<endl;
		}
};
class select_movie: public info
{
	public:
		
		void input()
		{
			cin.ignore();
			info::input();
			cout<<"----------------------------------------------------------"<<endl;
			cout<<"|||\t ID\t\t\tMovie\t\t\t|||"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			cout<<"|||\t 1\t\t\tBodyGuard (Salman Khan) |||"<<endl;
			cout<<"|||\t 2\t\t\tDon (Sharukhan)\t\t|||"<<endl;
			cout<<"|||\t 3\t\t\tMBBS (samjay Dat)\t|||"<<endl;
			cout<<"|||\t 4\t\t\tPK (Amir Khan)\t\t|||"<<endl;
			cout<<"|||\t 5\t\t\tKGF (yash)\t\t|||"<<endl;
			cout<<"----------------------------------------------------------"<<endl;
			cout<<endl;
			
		}
};
class explain:public info
{

	public:
	
	void output()
		{
			int ID;
			cout<<"Enter Your Choice using ID: ";
			cin>>ID;
			cout<<"Loading";
			for(int i=0;i<15;i++)
			{
				Sleep(270);
				cout<<a;
			}
			switch (ID)
			{
				case 1:
					bodyguard();
				break;
				case 2:
					Don();
				break;
				case 3:
					MBBS();
				break;
				case 4:
					PK();
				break;
				case 5:
					KGF();
				break;
				default:
					cout<<"invalid arguments. Try again ;) "<<endl;
				break;
			}
		}
};
int main()
{
	int choice;
	string key;
	add_movie add;
	select_movie select;
	explain exp;
	top:
		system("color 0A");
	cout<<"\t\t\t|Movie Time|"<<endl;
	cout<<"_____________________________________________________________________"<<endl;
	cout<<"[1] Select Your own movie\n[2] Select from our list (recommended)\n[00]Exit"<<endl;
	cout<<"Your Choice: ";
	cin>>choice;
	switch (choice)
	{
		case 1:
			system("cls");
			add.input();
			cout<<"Loading";
			for(int i=0;i<15;i++)
			{
				Sleep(270);
				cout<<a;
			}
			add.output();
			cout<<"Press Enter To continue....";
			getline(cin,key);
			system("cls");
			goto top;
		break;
		case 2:
			select.input();
			exp.output();
			cin.ignore();
			cout<<"Press Enter To continue....";
			getline(cin,key);
			system("cls");
			goto top;
		break;
		case 0:
			cout<<"Exiting";
			for(int i=0;i<15;i++)
			{
				
				Sleep(260);
				cout<<a;
				Sleep(260);
			}
			cout<<"Thanks Come again ;)";
			break;
		default:
			cout<<"invalid arguments\nTry again.";
			cout<<"Press Enter To continue....";
			getline(cin,key);
			system("cls");
			goto top;
		break;
	}
	return 0;
}
void bodyguard()
{
	system("color 4");
	cout<<"\t\tAbout"<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"\t||Movie Name:\t\t BodyGuard\t ||"<<endl;
	cout<<"\t||Actor Name:\t\t Salman Khan\t ||"<<endl;
	cout<<"\t||Type:\t\t\t 2D\t\t ||"<<endl;
	cout<<"\t||Size:\t\t\t 2000MB\t\t ||"<<endl;
	cout<<"\t||Length:\t\t 01:20:40\t ||"<<endl;
	cout<<"\t||Time to watch:\t Today 06:00 pm  ||"<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"Loading.";
	for(int i=0;i<15;i++)
			{
				Sleep(270);
				cout<<a;
			}
		system("start https://en.wikipedia.org/wiki/Bodyguard_(2011_Hindi_film)");
}
void Don()
{
	system("color 5");
	cout<<"\t\tAbout"<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"\t||Movie Name:\t\t Don\t\t ||"<<endl;
	cout<<"\t||Actor Name:\t\t Sharukh Khan\t ||"<<endl;
	cout<<"\t||Type:\t\t\t 2D\t\t ||"<<endl;
	cout<<"\t||Size:\t\t\t 2300MB\t\t ||"<<endl;
	cout<<"\t||Length:\t\t 01:40:40\t ||"<<endl;
	cout<<"\t||Time to watch:\t Today  10:00 pm ||"<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	for(int i=0;i<15;i++)
			{
				Sleep(270);
				cout<<a;
			}
	system("start https://en.wikipedia.org/wiki/Don_(2006_Hindi_film)");
}
void MBBS()
{
	system("color 6");
	cout<<"\t\tAbout"<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"\t||Movie Name:\t\t MBBS\t\t ||"<<endl;
	cout<<"\t||Actor Name:\t\ Munna bhai\t ||"<<endl;
	cout<<"\t||Type:\t\t\t 2D\t\t ||"<<endl;
	cout<<"\t||Size:\t\t\t 1800MB\t\t ||"<<endl;
	cout<<"\t||Length:\t\t 02:20:40\t ||"<<endl;
	cout<<"\t||Time to watch:\t Today  06:00 am ||"<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	for(int i=0;i<15;i++)
			{
				Sleep(270);
				cout<<a;
			}
	system("start https://en.wikipedia.org/wiki/Munna_Bhai_M.B.B.S.");
}
void KGF()
{
	system("color 7");
	cout<<"\t\tAbout"<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"\t||Movie Name:\t\t KGF\t\t ||"<<endl;
	cout<<"\t||Actor Name:\t\t Yash\t\t ||"<<endl;
	cout<<"\t||Type:\t\t\t 2D\t\t ||"<<endl;
	cout<<"\t||Size:\t\t\t 3000MB\t\t ||"<<endl;
	cout<<"\t||Length:\t\t 02:30:40\t ||"<<endl;
	cout<<"\t||Time to watch:\t Today  12:00 pm ||"<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	for(int i=0;i<15;i++)
			{
				Sleep(270);
				cout<<a;
			}
	system("start https://en.wikipedia.org/wiki/K.G.F:_Chapter_1");
}
void PK()
{
	system("color 3");
	cout<<"\t\tAbout"<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"\t||Movie Name:\t\t PK\t\t ||"<<endl;
	cout<<"\t||Actor Name:\t\t Amir Khan\t ||"<<endl;
	cout<<"\t||Type:\t\t\t 2D\t\t ||"<<endl;
	cout<<"\t||Size:\t\t\t 1000MB\t\t ||"<<endl;
	cout<<"\t||Length:\t\t 01:45:40\t ||"<<endl;
	cout<<"\t||Time to watch:\t Today  03:00 am ||"<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	for(int i=0;i<15;i++)
			{
				Sleep(270);
				cout<<a;
			}
	system("start https://en.wikipedia.org/wiki/PK_(film)");
}

