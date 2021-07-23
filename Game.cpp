#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;
class Game
{
	protected:
		string name;
		int balance = 100;
		int opt;
		int bet;
		int guess;
		string playerName;
		char a=30;
		int dice;
	public:
		void panel();
		void randm();
		void login();
		void ruls();
};

	void Game::panel()
	{
		cout<<"\n\n\t\t\t\tControl Panel"<<endl;
		cout<<"\t\t\t\t[1] login"<<endl;
		cout<<"\t\t\t\t[2] randm play"<<endl;
		cout<<"\t\t\t\t[0] Exit"<<endl;
		cin>>opt;
		switch(opt)
		{
			case 1:
				login();
			break;
			case 2:
				randm();
			break;
			case 0:
				cout<<"\t\t\t\tExiting...."<<endl;
			break;
			default:
				cout<<"\t\t\t\tInvalid Arguments"<<endl;
			break;
		}
	}
	
	void Game::login()
	{
		cout<<"\t\t\t\tComming Soon"<<endl;
	}
	
	void Game::randm()
	{
		ruls();
		cin.ignore();
		cout << "\t\t\t\t========WELCOME TO CASINO WORLD=======\n\n";
   		cout << "\t\t\t\tWhat's your Name : ";
   		getline(cin, playerName);
   		again:
   		cout<<"\t\t\t\tYou have "<<balance<<"Demo Amount"<<endl;
   		do 
		{
			cout<<"\t\t\t\tHow much you want to bet..?  ";
   			cin>>bet;
   			if(bet>balance)
   			{
   					cout << "\t\t\t\tBetting balance can't be more than current balance!\n\n\t\t\t\tRe-enter balance\n ";
			}
		}while(bet>balance);
		
		do
        {
           	cout << "\t\t\t\tGuess any betting number between 1 & 10 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
               	cout << "\t\t\t\tNumber should be between 1 to 10\n\t\t\t\tRe-enter number:\n ";
        
        }while(guess <= 0 || guess > 10);
        	
        cout<<"\t\t\t\t";
        	
       	for(int i=0;i<10;i++)
        {
        	Sleep(800);
        	cout<<a;
		}
		cout<<endl;
		for (int i=0;i<10;i++)
		{
			dice = 1+(rand()%8) + 1;
		}
       	if(dice == guess)
       	{
       		cout << "\n\n\t\t\t\tYou are in luck!! You have won Rs." << bet * 10;
           	balance = balance + bet * 10;
        }
        else
        {
            cout << "\t\t\t\tOops, better luck next time !! You lost  "<< bet <<"\n";
           	balance = balance - bet;
        }
        cout << "\n\t\t\t\tThe winning number was : " << dice <<"\n";
        cout << "\n\t\t\t\t"<<playerName<<", You have balance of  " << balance << "\n";
        
        if(balance == 0)
        {
            cout << "\t\t\t\tYou have no money to play ";
            cout << "\t\t\t\tCome again Tomrrow ";
            exit(0);
            
        }

        cout << "\n\n\t\t\t\t-->Do you want to play again (1/0)? ";
       	cin >> opt;
    	if(opt== 1 || opt == 0)
    	goto again;
    	cout << "\n\n\n";
   		cout << "\n\n\t\t\t\tThanks for playing the game. Your balance is  " << balance << "\n\n";
   		Sleep(1200);
   		system("cls");
		}
	
	void Game::ruls()
	{

    	system("cls");
    	cout << "\t\t\t\t\t======CASINO NUMBER GUESSING RULES!======\n";
    	cout << "\t\t\t\t1. Choose a number between 1 to 10\n";
    	cout << "\t\t\t\t2. Winner gets 10 times of the money bet\n";
    	cout << "\t\t\t\t3. Wrong bet, and you lose the amount you bet\n\n";
    	
	}  

int main()
{
	system("TITLE CASINO NUMBER GUESSING");
	Game game;
	game.panel();
    return 0;
}

