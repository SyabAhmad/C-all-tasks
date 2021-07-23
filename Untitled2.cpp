#include <iostream>
using namespace std;
void base(int arr[5])
{
	int sum = 0;
	for(int i=0;i<5;i++)
	{
		cin >> arr[i];
	}
	for(int i=0;i<5;i++)
	{

		if(i%2!=1)
		{
			sum +=arr[i]; 
			cout<<arr[i]<<", ";
		}
	}
	cout <<endl <<"sum:" <<sum;
}
int main()
{
	const int a =5;
	int arr[a];
	cout<<"Enter values for arry to find: ";
	base(arr);
}
