#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	string name;
	ifstream ou;
	ou.open("/sdcard/cpp/name.txt");
	getline (ou,name);
	cout<<name;
	return 0;
}