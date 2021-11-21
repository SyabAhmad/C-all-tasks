#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream ou;
	ou.open("/sdcard/cpp/name.txt");
	ou<<"My name is shahid hussain";
	cout<<"Task completed";
	return 0;
}