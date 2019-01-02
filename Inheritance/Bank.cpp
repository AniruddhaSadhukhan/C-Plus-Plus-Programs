#include<iostream>
#include<cmath>
using namespace std;

/*Assume that a bank maintains two kinds of accounts, one called savings account and
the other as current account. The savings account provides compound interest and
withdrawal facilities but no cheque book facilities. The current account provides
cheque book facility but no interest. Current account holders should also maintain a
minimum balance and if the balance falls below the level, a service charge is
imposed.
Create a class account that stores customer name, account number and type of
account. From this, derive the classes cur_acct and sav-acct to make them more
specific to their requirements. Include necessary member functions in oorder to
achieve the following tasks:
a. Accept deposit from a customer and update the balance
b. Display the balance
c. Compute and deposit interest
d. Permit withdrawal and update the balance.
e. Check for minimum balance, impose penalty, necessary and update the
balance
Include constructors and appropriate member functions to implement the classes.*/
//		by Aniruddha


#define penalty 50
#define rate 0.05

class Account
{
	protected:
		string name;
		int ac_no;
		string ac_type;
		float bal;
		Account(string s,int n,string t,float b)
		{
			name = s;
			ac_no = n;
			ac_type = t;
			bal = b;
		}
	public:
		void display()
		{
			cout<<"Name : "<<name<<"\nA/C no. : "<<ac_no<<"\nA/C Type : ";
			cout<<ac_type<<"\nBalance : "<<bal<<endl;
		}
		void deposit(float a)
		{
			bal += a;
			cout<<"Balance after deposit : "<<bal<<endl;
		}
};

class Cur_acct : public Account
{
	public:
		Cur_acct(string s,int n,string t,float b):Account(s,n,t,b) {}
		void min_bal()
		{
			if(bal<500)
			{
				cout<<"Penalty Imposed for low balance\n";
				bal -= penalty;
				cout<<"Balance after penalty : "<<bal<<endl;
			}
		}
		
		void withdraw(float a)
		{
			min_bal();
			if(bal>=a)
			{
				bal -= a;
				cout<<"Balance after withdrawal : "<<bal<<endl;
			}
			else  cout<<"Insufficient Balance\n";
		}
		
};

class Sav_acct : public Account
{
	public:
		Sav_acct(string s,int n,string t,float b):Account(s,n,t,b) {}
		void interest()
		{
			float t;
			cout<<"Enter time : ";
			cin>>t;
			bal = bal*pow(1+rate,t);
			cout<<"Balance after interest : "<<bal<<endl;
		}
		void withdraw(float a)
		{
			interest();
			if(bal>=a)
			{
				bal -= a;
				cout<<"Balance after withdrawal : "<<bal<<endl;
			}
				
			else  cout<<"Insufficient Balance\n";
		}
};


int main()
{	
	Sav_acct s("Aniruddha",5555,"Savings",1000.0);
	s.display();
	s.deposit(5000);
	s.withdraw(3000);
	s.withdraw(10000);
	
	
	Cur_acct c("Ani",2222,"Current",5000);
	c.display();
	c.withdraw(4600);
	c.withdraw(200);
	c.deposit(1000);
	
	
	return 0;	
}

/*Sample Output
Name : Aniruddha
A/C no. : 5555
A/C Type : Savings
Balance : 1000
Balance after deposit : 6000
Enter time : 3
Balance after interest : 6945.75
Balance after withdrawal : 3945.75
Enter time : 2
Balance after interest : 4350.19
Insufficient Balance
Name : Ani
A/C no. : 2222
A/C Type : Current
Balance : 5000
Balance after withdrawal : 400
Penalty Imposed for low balance
Balance after penalty : 350
Balance after withdrawal : 150
Balance after deposit : 1150

*/
