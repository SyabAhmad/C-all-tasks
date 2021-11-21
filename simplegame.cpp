#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;
int main()
{
	
	int t=rand()%time(0)%5;
	t+=1;
	cout<<"Guess The Number"<<endl;
	sleep(1);
	clrscr();
	cout<<"Rules \n3 lives";
	return 0;
}