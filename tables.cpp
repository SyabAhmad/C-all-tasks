#include <iostream>
using namespace std;
int main()
{
	for (int i=1; i<11;i++)
	{
		int s[10],c=0;
		for (int t=1;t<11;t++)
		{
			s[c]=i;
			cout<<s[c]<<" x "<<t<<" = ";
			cout<<i*t<<endl;
			c++;
		}
		cout<<endl<<endl;
	}
	
	return 0;
}