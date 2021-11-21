#include <iostream>
using namespace std;
int main()
{
	int i,u,e;
	cout<<"Enter a number : ";
	cin>>u;
	cout<<"1:-Sum of even number"<<endl;
	cout<<"2:-Sum of odd number"<<endl;
	cout<<"3:-Sum off all number"<<endl;
	cout<<"Chose option by numer (1,2,3)"<<endl;
	cout<<"Enter : ";
	cin>>e;
	if (e==1)
	{
		if(u%2==1 && u!=0)
		{
		u-=1;
		}
		i=u-2;
		while (i>0)
		{
			u+=i;
            i-=2;
		}
		cout<<"Sum is : "<<u;
	}
	else if (e==2)
	{
		if(u%2==0 && u!=0)
		{
		u-=1;
		}
		i=u-2;
		while (i>0)
		{
			u+=i;
            i-=2;
		}
		cout<<"Sum is : "<<u;
	}
	else if (e==3)
	{
		
		i=u-1;
		while (i>0)
		{
			u+=i;
            i--;
		}
		cout<<"Sum is : "<<u;
	}
	else if (e!=1 && e!=2 && e!=3)
	{
		cout<<"wrong selection";
		
	}
	return 0;
}
