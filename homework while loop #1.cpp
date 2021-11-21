#include <iostream>
using namespace std;
int main()
{
	int n=0;
	char t[5];
	cout<<"Enter a name or word of 6 characters : ";
	cin>>t;
	while (n<=5)
	{
		cout<<t[n]<<endl;
		n++;
	}
	cout<<endl<<t;
	return 0;
}