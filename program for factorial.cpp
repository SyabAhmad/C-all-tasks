#include <iostream> //--i suffix i-- postfix
using namespace std;
int main()
{
	int no;
	int f=1;
	cout<<"Enter a number to get its factorial : ";
	cin>>no;
	if (no==0)
	{
		cout<<"Factorial = 1"<<endl;
	}
	else if (no<0)
	 {
		cout<<"Wrong number";
	}
	for (int i=1;i<=no;i++)
	{
		f*=i;
	
	}
	cout<<"Factorial of "<<no<<" is : "<<f;
	
	return 0;
}