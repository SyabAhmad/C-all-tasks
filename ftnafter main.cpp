#include <iostream>
using namespace std;
int main()
{
	int fun(int x,int y);
	cout<<fun(2,3);
	return 0;
}
int fun (int x,int y)
{
	int z=x+y;
	return z;
}