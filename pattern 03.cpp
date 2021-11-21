#include <iostream>
using namespace std;
int main()
{
	const int size = 20;
	for(int i=0;i<size;i++)
	{
		for(int j=size;j>i;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
