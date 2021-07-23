#include <iostream>
using namespace std;
int FactorialFinder(int x)
{
	if (x==1)
	{
		return 1;
	}
	else
	{
		return x*FactorialFinder(x-1);
	}
}
int main()
{
	cout<<FactorialFinder(10);
}