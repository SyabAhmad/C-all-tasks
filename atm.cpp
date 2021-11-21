#include <iostream>

using namespace std;
int account_number;
int pin_code;
double balance = 0;
int D_amount;
int T_amount;
int W_amount;
class atm
{
	protected:
		string name;
		string password;
	public:
		void balance_inquiry()
		{
			back4:
			cout<<"Enter account Number: ";
			cin>>account_number;
			if(account_number == account_number)
			{
				cout<<"You have "<<balance<<"amount in your account";
			}
			else
			{
				goto back4;
			}
		}
		void Deposit_amount()
		{
			back5:
			cout<<"Enter account Number: ";
			cin>>account_number;
			
			if(account_number == account_number)
			{
				cout<<"Enter Deposit Amount: ";
				cin>>D_amount;
				cout<<"Your Balance is "<<balance;
			}
			else
			{
				goto back5;
			}
		}
		void transfer_amount()
		{
			back6:
			cout<<"Enter account Number: ";
			cin>>account_number;
			if(account_number == 0000 || account_number == 1111 ||account_number == 2222 ||account_number == 3333 )
			{
				cout<<"Enter transfer Amount: ";
				cin>>T_amount;
				cout<<"Amount Transfer Successfully"<<endl;
				cout<<"Your current Balance is "<<balance-T_amount<<"."<<endl;
			}
			else
			{
				goto back6;
			}
		}
		void withdrow_amount()
		{
			back7:
			cout<<"Enter account Number: ";
			cin>>account_number;
			if(account_number == 0000 || account_number == 1111 ||account_number == 2222 ||account_number == 3333 )
			{
			
				cout<<"Enter transfer Amount: ";
				cin>>W_amount;
				cout<<"Amount Withdrow Successfully"<<endl;
				cout<<"Your current Balance is "<<balance-W_amount<<"."<<endl;
			}
			else
			{
				goto back7;
			}
		}
};

int  manu()
{
	atm atm1;
	int opt;
	main:
	cout<<"[1] Balance inquiry"<<endl;
	cout<<"[2] Deposit Amount"<<endl;
	cout<<"[3] Transfer Amount"<<endl;
	cout<<"[4] Withdrow money"<<endl;
	cin>>opt;
	switch (opt)
	{
		case 1:
			atm1.balance_inquiry();
			system("cls");
			goto main;
		break;
		case 2:
			atm1.Deposit_amount();
			goto main;
		break;
		case 3:
			atm1.transfer_amount();
			goto main;
		break;
		case 4:
			atm1.withdrow_amount();
			goto main;
		break;
	}
}

int main()
{
	cout<<"\t\t\t\t==========================================="<<endl;
	cout<<"\t\t\t\t\t|| WELCOME TO MY PROJECT ||"<<endl<<endl;
	cout<<"\t\t\t\t==========================================="<<endl;
	cout<<"\t\t\t\t==========================================="<<endl;
	top:
	cout<<"Account Number: ";
	cin>>account_number;
	if(account_number==0000)
	{
		
		for(int i=1;i<4;i++)
		{
			cout<<"Pin Code: ";
			cin>>pin_code;
			if(pin_code==1111)
			{
				manu();		
			}
			else
			{
				cout<<"Account Pin Code incorrect\nYour account will be Block after "<<2-i<<" try"<<endl;
		
			}
		}
		goto top;
		
	}
	else if(account_number==1111)
	{
		
		for(int i=0;i<3;i++)
		{
			cout<<"Pin Code: ";
			cin>>pin_code;
			if(pin_code==1111)
			{
				manu();		
			}
			else
			{
				cout<<"Account Pin Code incorrect\nYour account will be Block after "<<2-i<<" try"<<endl;
		
			}
		}
		goto top;
		
	}
	else if(account_number==2222)
	{
		
		for(int i=0;i<3;i++)
		{
			cout<<"Pin Code: ";
			cin>>pin_code;
			if(pin_code==1111)
			{
				manu();		
			}
			else
			{
				cout<<"Account Pin Code incorrect\nYour account will be Block after "<<2-i<<" try"<<endl;
		
			}
		}
		goto top;
		
	}
	else if(account_number==3333)
	{
		for(int i=0;i<3;i++)
		{
			cout<<"Pin Code: ";
			cin>>pin_code;
			if(pin_code==1111)
			{
				manu();		
			}
			else
			{
				cout<<"Account Pin Code incorrect\nYour account will be Block after "<<2-i<<" try"<<endl;
		
			}
		}
		goto top;
	}
	else 
	{
		
		cout<<"ERROR: 404. \nAccount nor found"<<endl;
	}
	

}
