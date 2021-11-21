#include <iostream>
using namespace std;
int main() {
    float x,y;
    char s,t;
    float c;
    cout<<"Enter 'c' to start and 'e' to exit\n";
    cin>>t;
    while (t=='c')
    {
    
    cout << "Enter Expression with operator:";
//> Operator mean (+,-,*,/)    
    cin >> x >> s >> y;
                         
        if (s == '+')
    {
    	
        cout << "Result:" <<x+y<< endl;
        
    }
 	
    if (s == '-') {
    	
        cout << "Result:" <<x-y<< endl;        
   }

   if (s == '*') {
    	
        cout << "Result:" <<x*y<< endl;
    }
  	
    if (s == '/') {
    	
        cout << "Result:" <<x/y<< endl;
        
    }
    
    cout<<"\n\nMade by Shadow\nAKA\nShahid Hussain\n";
    }
    return 0;
}

