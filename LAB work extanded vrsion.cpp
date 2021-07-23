#include<iostream>
using namespace std;
class publication {
	protected:
		string name;
		int price;
	public:
		string N = name;
		int P = price;
		void input() {
			cout<<"Enter Name of the book: ";
			cin>>N;
			cout<<"Enter price of the book: ";
			cin>>P;
		}

		void output()
		{
			cout<<"Name of Book: "<<N<<endl;
			cout<<"Price of book: "<<P<<endl;
		}
};
class Book:public publication {
	public:
		int page_count;
		void input() {
			publication::input();
			cout<<"Enter number of pages: ";
			cin>>page_count;
		}
		void output()
		{
			publication::output();
			cout<<"Pages # "<<page_count;
		}
};
int main() {
	Book book;
	book.input();
	book.output();
	return 0;
}