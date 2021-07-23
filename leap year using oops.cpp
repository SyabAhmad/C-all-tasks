#include <iostream>
using namespace std;
class Leap_Year
{
	protected:
		int inputt;
	public:
		void input()
		{
			cout<<"Enter Value: ";
			cin>>inputt;
			check();
		}
		void check()
		{
			switch (inputt)
			{
				case 'a':
					cout<<inputt<<" is Vowel"<<endl;
				break;
				case 'e':
					cout<<inputt<<" is Vowel"<<endl;
				break;
				case 'i':
					cout<<inputt<<" is Vowel"<<endl;
				break;
				case 'o':
					cout<<inputt<<" is Vowel"<<endl;
				break;
				case 'u':
					cout<<inputt<<" is Vowel"<<endl;
				break;
				
			}
		}
};
int main()
{
	Leap_Year leap_year;
	leap_year.input();
	return 0;
}
