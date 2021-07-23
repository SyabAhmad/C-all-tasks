//#include <iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
//	char ch[100];
//	fstream obj("myfile.txt",ios::in);
//	if(obj.is_open())
//	{
//		while(!obj.eof())
//		{
//			obj.getline(ch,100);
//			cout<<ch<<endl;
//		}
//	}
//	else
//	{
//		cout<<"Unable To open File"<<endl;
//	}
//	
//	return 0;
//}
#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int openfile(int* fileName)
{
	fstream fp;
	fp.open(*fileName);
    if(fp==NULL)
    {
        cout<<"\nError Occurred!";
        return 0;
    }
    cout<<"\nContent of "<<*fileName<<":-\n";
    while(fp.eof()==0)
    {
        fp.get(ch);
        cout<<ch;
    }
    fp.close();
    cout<<endl;
}
int main()
{
    char fileName[30],  ch[30];
    cout<<"Enter the Name of File: ";
    cin.get(fileName,30);
    openfile(&fileName);
    return 0;
}
