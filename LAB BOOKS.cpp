///Syed Syab Ahmad Shah
#include<iostream>
using namespace std;
class publication
{
	protected:
		string name;
		int price;
	public:
		string N;
		int p;
		void input()
		{
			cout<<"Enter title of the BOOK: ";
			cin>>N;
			cout<<"Enter price of the BOOK: ";
			cin>>p;
			name = N;
			price = p;
		}
		void output()
		{
			cout<<"Title of the BOOK: "<<name<<endl;
			cout<<"Price of the BOOK: "<<price<<endl;
		}
};
class sale
{
	public:
		int s1, s2, s3;
		void input()
		{
			cout<<"Enter the 1st month sale: ";cin>>s1;
			cout<<"Enter the 2nd month sale: ";cin>>s2;
			cout<<"Enter the 3rd month sale: ";cin>>s3;
		}
		void output()
		{
			cout<<"1st month sale: "<<s1<<endl;
			cout<<"2nd month sale: "<<s1<<endl;
			cout<<"3rd month sale: "<<s1<<endl;
		}
};
class books:public publication, public sale
{
	public:
		int page_count;
		void input()
		{
			publication::input();
			sale::input();
			cout<<"Enter number of pages: ";cin>>page_count;
		}
		void output()
		{
			publication::output();
			sale::output();
			cout<<"Number of pages: "<<page_count<<endl;
		}
};
class tape:public publication, public sale
{
	public:
		int timer;
		void input()
		{
			publication::input();
			sale::input();
			cout<<"time of audio: ";cin>>timer;
		}
		void output()
		{
			publication::output();
			sale::output();
			cout<<"Time of audio: "<<timer;
		}
};
int main()
{
	books B;
	tape T;
	B.input();
	B.output();
	T.input();
	T.output();
	return 0;
}