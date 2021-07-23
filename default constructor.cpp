#include<iostream>
#include<string.h>
using namespace std;
class today{
	public:
		int x ,y;
		today(int a,int b){
			x=a;
			y=b;
		}
		void display(){
			cout<<"value of x is:"<<x<<endl;
			cout<<"value of y is:"<<y;
		}
		
};

int main(){
	today obj(12,20);

	obj.display();
}
