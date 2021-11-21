#include <iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Enter char : ";
	cin>>c;
	switch (c)
	{
		case 'a':
		cout<<c<<" is a vowel";
		break;
        
        case 'e':
		cout<<c<<" is a vowel";
		break;
	
		case 'i':
		cout<<c<<" is a vowel";
		break;
		
		case 'o':
		cout<<c<<" is a vowel";
		break;
		
	    case 'u':
		cout<<c<<" is a vowel";
		break;
		
	    default:
	    cout<<"Is not vowel";
	}
	return 0;
}