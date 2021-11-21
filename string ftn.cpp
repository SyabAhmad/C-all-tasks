#include <iostream>
using namespace std;
string g (char x)
{
	string c;
	if (x=='f')
	{
		c="female";
	}
	else if (x=='m')
	{
		c="male";
	}
	return c;
}

int main()
{
	char r;
	cout<<"Enter M for male and F for female : ";
	cin>>r;
	cout<<"gender = "<<g(r);
	return 0;
}
