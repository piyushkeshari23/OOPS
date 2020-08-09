#include<iostream>
using namespace std;
class Account
{
	private:
		int accountBal;
    public:
    Account(int accountBal)
	{
		if(accountBal>=0)
		{
			this -> accountBal=accountBal;
		}
		else
		{
		    this -> accountBal=0;
			cout<<"Initial balance is invalid\n";	
		}
		}
		
		void Credit(int amount)
		{
			accountBal=accountBal + amount;
			}	
		void Debit(int amount)
		{
			if(accountBal>=amount)
			{
				accountBal=accountBal-amount;
			}
			else
			cout<<"Debit amount exceeded account balance\n";
		}
		int getBalance()
		{
			return accountBal;
		}
};
int main()
{
	int accountBal,amount;
	cout<<"Enter Bank account balance for account 1:";
	cin>>accountBal;
	Account account1(accountBal);
	cout<<"Enter Bank account balance for account 2:";
	cin>>accountBal;
	Account account2(accountBal);
	cout<<"Initial balance of ACCOUNT 1 is"<<" "<<account1.getBalance()<<"\nInitial amount of Account 2 is"<<" "<<account2.getBalance()<<endl;
    cout<<"Enter debit amount for account 1 :";
	cin>>amount;
	account1.Debit(amount);
	cout<<"Enter debit amount for account 2 :";
	cin>>amount;
	account2.Debit(amount);
	cout<<"Account 1 balance after debit is"<<" "<<account1.getBalance()<<"\nAccount 2 balance after debit is"<<" "<<account2.getBalance()<<endl;
	cout<<"Enter credit amount for account 1 :";
	cin>>amount;
	account1.Credit(amount);
	cout<<"Enter credit amount for account 2 :";
	cin>>amount;
	account2.Credit(amount);
	cout<<"Account 1 balance after credit is"<<" "<<account1.getBalance()<<"\nAccount 2 balance after credit is"<<" "<<account2.getBalance()<<endl;
		
}


















