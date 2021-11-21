#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    float x,y;
    char s;
    int t,e,r;
    float c;
    do
    {
    
    cout << "Enter Expression with operator:";
//> Operator mean (+,-,*,/)    
    cin >> x >> s >> y;
                         
        if (s == '+')
    {
    	
        cout << "Result:" <<x+y<< endl;
        cout << endl <<"Chose \n";
        cout <<"1 Continue"<<endl<<"2 exit \nEnter number : ";
        cin >>t;
    }
 	
    if (s == '-') {
    	
        cout << "Result:" <<x-y<< endl;    
        cout << endl <<"Chose \n";
        cout <<"1 Continue"<<endl<<"2 exit \nEnter number : ";
        cin >>t;    
   }

   if (s == '*') {
    	e=x;
    	r=y;
        cout << "Result:" <<e*r<< endl;
        cout << endl <<"Chose  \n";
        cout <<"1 Continue"<<endl<<"2 exit \nEnter number : ";
        cin >>t;
    }
  	
    if (s == '/') {
    	
        cout << "Result:" <<x/y<< endl;
        cout << endl <<"Chose \n";
        cout <<"1 Continue"<<endl<<"2 exit \nEnter number : ";
        cin >>t;
        
    }
    if (s == '%') {
    	e=x;
        r=y;
        cout << "Result:" <<e%r<< endl;
        cout << endl <<"Chose \n";
        cout <<"1 Continue"<<endl<<"2 exit \nEnter number : ";
        cin >>t;
        
    }
    }
    while (t==1);
    
    cout<<"\n\nMade by Shadow\nAKA\nShahid Hussain\n\n";
    
    return 0;
}

