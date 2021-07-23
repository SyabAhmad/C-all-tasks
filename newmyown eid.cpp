#include <iostream>
#include<graphics.h>
#include <windows.h>
#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight*2.75
using namespace std;
class intro
{
	public:
		void introduction();
};
void Rain(int n)
{
    int i,rx,ry;
    for(i=0;i<900;i++)
    {
         rx=rand() % ScreenWidth;
         ry=rand() % ScreenHeight;
         if(ry<GroundY)line(rx-10,ry-10,rx,ry);
         line(rx-10,ry-10,rx,ry);
    }
}

	int one()
	{
		int n=0;
		for(int i=1;i<6;i++)
		{
			
			settextstyle(BOLD_FONT,HORIZ_DIR,3);
    		outtextxy(900,900,"CREDIT GOES TO: SYED SYAB AHMAD SHAH");
    		arc(355,450,87,330,110);
    		arc(385,433,99,320,95);
    		Rain(n);
        	delay(40);
        	cleardevice();
		}
	}
    int two()
    {
    	int n=0;
    	for(int i=1;i<6;i++)
    	{
    		settextstyle(BOLD_FONT,HORIZ_DIR,3);
    		outtextxy(900,900,"CREDIT GOES TO: SYED SYAB AHMAD SHAH");
    		arc(355,450,87,330,110);
    		arc(385,433,99,320,95);
    		settextstyle(BOLD_FONT,HORIZ_DIR,10);
    		outtextxy(410,280,"\ EID-UL-AZHA \n");
    		Rain(n);
        	delay(40);
        	cleardevice();
		}
    	
	}
	
	int three()
	{
		int n=0;
		for(int i=1;i<6;i++)
		{
			settextstyle(BOLD_FONT,HORIZ_DIR,3);
    		outtextxy(900,900,"CREDIT GOES TO: SYED SYAB AHMAD SHAH");
    		arc(355,450,87,330,110);
    		arc(385,433,99,320,95);
    		settextstyle(BOLD_FONT,HORIZ_DIR,10);
    		outtextxy(410,280,"\ EID-UL-AZHA \n");
    		outtextxy(455,450,"\  MUBARAK \n");
    		Rain(n);
        	delay(40);
        	cleardevice();
		}
	}
	int four()
	{
		int n=0;
		for(int i=1;i<6;i++)
		{
			settextstyle(BOLD_FONT,HORIZ_DIR,3);
    		outtextxy(900,900,"CREDIT GOES TO: SYED SYAB AHMAD SHAH");
    		arc(355,450,87,330,110);
    		arc(385,433,99,320,95);
    		settextstyle(BOLD_FONT,HORIZ_DIR,10);
    		outtextxy(410,280,"\ EID-UL-AZHA \n");
    		outtextxy(455,450,"\  MUBARAK \n");
    		settextstyle(BOLD_FONT,HORIZ_DIR,6);
    		outtextxy(555,620,"\=> TO MY FAMILY MEMBERS \"");
    		Rain(n);
        	delay(40);
        	cleardevice();
		}
	}
	int five()
	{
		int n=0;
		for(int i=1;i<25;i++)
		{
			settextstyle(BOLD_FONT,HORIZ_DIR,3);
    		outtextxy(900,900,"CREDIT GOES TO: SYED SYAB AHMAD SHAH");
    		arc(355,450,87,330,110);
    		arc(385,433,99,320,95);
    		settextstyle(BOLD_FONT,HORIZ_DIR,10);
    		outtextxy(410,280,"\ EID-UL-AZHA \n");
    		outtextxy(455,450,"\  MUBARAK \n");
    		settextstyle(BOLD_FONT,HORIZ_DIR,6);
    		outtextxy(555,620,"\=> TO MY FAMILY MEMBERS \"");
    		outtextxy(555,690,"\=> AND TO MY FRIENDS \"");
    		Rain(n);
        	delay(40);
        	cleardevice();
		}
	}

	int six()
	{
		int n=0;
		for(int i=0;i<10;i++)
		{
			settextstyle(BOLD_FONT,HORIZ_DIR,7);
			outtextxy(250,430,"Allahu akbar, Allahu akbar,\n");
			outtextxy(160,500,"La ilaha illallah, Wallahu akbar,\n"); 
			outtextxy(200,580," Allahu akbar wa lillahil hamd\n");
			Rain(n);
        	delay(40);
        	cleardevice();
		}	 
	}
int main()
{
	intro intro1;
    int gd = DETECT, gm;
    initwindow(1500, 1000);
    int n=0;
	//intro1.introduction();
    while(!kbhit())
    {
    	one();
    	two();
    	three();
    	four();
    	five();
    	six();
    }
    getch();

}

	void intro::introduction()
	{
		
		int const x = 100;
		int n=0;
		Rain(n);
		settextstyle(BOLD_FONT,HORIZ_DIR,4);
		Sleep(x);
		outtextxy(400,450,"C");
		Sleep(x);
		outtextxy(425,450,"R");
		Sleep(x);
		outtextxy(450,450,"E");
		Sleep(x);
		outtextxy(475,450,"A");
		Sleep(x);
		outtextxy(500,450,"T");
		Sleep(x);
		outtextxy(525,450,"E");
		Sleep(x);
		outtextxy(550,450,"D");
		Sleep(x);
		outtextxy(575,450," ");
		Sleep(x);
		outtextxy(600,450,"B");
		Sleep(x);
		outtextxy(625,450,"Y");
		Sleep(x);
		outtextxy(650,450,":: ");
		Sleep(x);
		outtextxy(675,450,"S");
		Sleep(x);
		outtextxy(700,450,"Y");
		Sleep(x);
		outtextxy(725,450,"E");
		Sleep(x);
		outtextxy(750,450,"D");
		Sleep(x);
		outtextxy(775,450," ");
		Sleep(x);
		outtextxy(800,450,"S");
		Sleep(x);
		outtextxy(825,450,"Y");
		Sleep(x);
		outtextxy(850,450,"A");
		Sleep(x);
		outtextxy(875,450,"B");
		Sleep(x);
		outtextxy(900,450," ");
		Sleep(x);
		outtextxy(925,450,"A");
		Sleep(x);
		outtextxy(950,450,"H");
		Sleep(x);
		outtextxy(975,450,"M");
		Sleep(x);
		outtextxy(1000,450,"A");
		Sleep(x);
		outtextxy(1025,450,"D");
		Sleep(x);
		outtextxy(1050,450," ");
		Sleep(x);
		outtextxy(1075,450,"S");
		Sleep(x);
		outtextxy(1100,450,"H");
		Sleep(x);
		outtextxy(1125,450,"A");
		Sleep(x);
		outtextxy(1150,450,"H");
		Sleep(500);
		outtextxy(1175,450,"\n\n");
		////happy coding
		outtextxy(650,550,"H");
		Sleep(x);
		outtextxy(675,550,"A");
		Sleep(x);
		outtextxy(700,550,"P");
		Sleep(x);
		outtextxy(725,550,"P");
		Sleep(x);
		outtextxy(750,550,"y");
		Sleep(x);
		outtextxy(775,550,"  ");
		Sleep(x);
		outtextxy(800,550,"C");
		Sleep(x);
		outtextxy(825,550,"O");
		Sleep(x);
		outtextxy(850,550,"D");
		Sleep(x);
		outtextxy(875,550,"i");
		Sleep(x);
		outtextxy(900,550,"N");
		Sleep(x);
		outtextxy(925,550,"G");
		Sleep(1000);
		
	}
