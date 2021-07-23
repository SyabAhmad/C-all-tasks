#include <iostream>
#include <fstream>
using namespace std;

class Teacher
{
	protected:
		string T_name;
		string T_id;
		string T_gender;
	public:
		void get_data()
		{
			cout<<"**********Enter Teacher DATA***********"<<endl;
			cout<<"Teacher Name: ";
			getline(cin,T_name);
			cout<<"Teacher ID: ";
			getline(cin,T_id);
			cout<<"Teacher Gender: ";
			getline(cin,T_gender);
		}
		void show_data()
		{
			cout<<"TEachers DATA : "<<endl;
			cout<<"TEacher Name: "<<T_name<<endl;
			cout<<"TEacher ID: "<<T_id<<endl;
			cout<<"TEacher GEnder: "<<T_gender<<endl;
		}
};

class Department : public Teacher
{
	protected:
		string D_name;
		string D_id;
		string D_teachers;
	public:
		void get_data()
		{
			Teacher::get_data();
			cout<<"**********Enter Department DATA***********"<<endl;
			cout<<"Department Name: ";
			getline(cin,D_name);
			cout<<"Department ID: ";
			getline(cin,D_id);
			cout<<"Department Gender: ";
			getline(cin,D_teachers);
		}
		void show_data()
		{
			Teacher::show_data();
			cout<<"Department DATA : "<<endl;
			cout<<"Department Name: "<<D_name<<endl;
			cout<<"Department ID: "<<D_id<<endl;
			cout<<"Department array of teachers: "<<D_teachers<<endl;
		}
		
		void add_teacher
		
};

int main()
{
	Department dpt;
	dpt.get_data();
	dpt.show_data();
}
