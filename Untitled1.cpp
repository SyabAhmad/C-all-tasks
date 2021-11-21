#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	string pin_code;
	char code;
	cout<<"Enter PIN CODE: ";
	for(int i=0;i<4;i++)
	{
		pin_code = getch();
		pin_code += code;
		cout<<"@";
	}
	return 0;
}
