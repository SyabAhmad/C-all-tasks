#include <iostream>
using namespace std;
int main()
{
	try
	{
		int momsAge = 60;
		int sonsAge = 55;
		
		if(sonsAge >= momsAge-4 )
		{
			throw 99;
		}
	}catch(int x)
	{
		cout<<"SonaAge can not be greater or equal to MmmsAge ERROR: 99"<<endl;
	}
}