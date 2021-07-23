#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int n=0;
    char ch;
    string pin;
    system("TITLE Enter password");
    cout<<"Enter numbers "<<endl;
    ch = _getch();
    for(int i=0;i<10;i++)
    {
    	ch = _getch();
    	cout<<"#";
	}
	cout<<endl;
    system ("pause");
    return 0;
}
