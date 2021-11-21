#include <iostream>
using namespace std;
int main()
{
	char c;
	int a,b;
	cout<<"Enter no with operator(1+2) : ";
	cin>>a>>c>>b;
//	cout<<"Enter char : ";
//	cin>>c;
	switch (c)
	{
		case '+':
		cout<<"Addition = "<<a+b;
		break;
        
        case '-':
		cout<<"subtraction = "<<a-b;
		break;
	
		case '*':
	    cout<<"Multiplication = "<<a*b;
		break;
		
		case '/':
		cout<<"Division = "<<a/b;
		break;
		
	    default:
	    cout<<"invalid syntax";
	}
	return 0;
}