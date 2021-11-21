#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int di=1,p;
	char ss[50];
	cout<<"Enter a msg which you want to display : ";
	cin.getline (ss,50);
	cout<<"Enter how many times you want to display msg : ";
	cin>>p;
	while (di<=p)
	{
		cout<<ss;
		cout<<endl;
		di++;
	}
	
	return 0;
}