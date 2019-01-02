#include<iostream>
using namespace std;

/*Write a C++ program to implement a class to 
represent bank account .Include the following members:- 
DATA MEMBER :Name of the depositor, Account number, 
			Type of account,Balance amount in the account 
MEMBER FUNCTION :To assign initial values, To deposit an amount,
			To withdraw an amount,To display name and balance. 

*/
//				by Aniruddha

struct Bank
{
	private:
		float bal;
		char name[30],type[5];
		int acno;
	public:
		void create()
		{
			cout<<"Enter name : ";
			cin>>ws;//Discard input buffer
			cin.getline(name,29);
			cout<<"Type of account : ";
			cin>>type;
			cout<<"Account number: ";
			cin>>acno;
			bal = 0;
		}
		void deposit()
		{
			float d;
			cout<<"Enter value to deposit : ";
			cin>>d;
			bal+=d;
			cout<<"Balance bocomes : "<<bal;
		}
		void withdraw()
		{
			float w;
			cout<<"Enter value to withdraw : ";
			cin>>w;
			if(w>bal)
				cout<<"Not enough balance";
			else
			{
				bal-=w;
				cout<<"Balance bocomes : "<<bal;
			}
			
		}
		void display()
		{
			cout<<"Name : "<<name<<"\nA/C type : "<<type<<"\nA/C no. : "<<acno<<"\nBalance : "<<bal;
		}
};			

int main()
{
	Bank b;
	int a;			
	cout<<"1)Create account\n2)Deposit\n3)Withdraw\n4)Display\n5)Exit";
	while(1)
	{
		cout<<"\nEnter option: ";
		cin>>a;
		switch(a)
		{
			case 1:b.create();break;
			case 2:b.deposit();break;
			case 3:b.withdraw();break;
			case 4:b.display();break;
			case 5:return 0;
			default:cout<<"Try Again";
		}
			
	}
	
	return 0;
}
/*Sample Output:
1)Create account
2)Deposit
3)Withdraw
4)Display
5)Exit
Enter option: 1
Enter name : Aniruddha Sadhukhan
Type of account : S/B
Account number: 5446614

Enter option: 2
Enter value to deposit : 5000
Balance bocomes : 5000
Enter option: 3
Enter value to withdraw : 3000
Balance bocomes : 2000
Enter option: 4
Name : Aniruddha Sadhukhan
A/C type : S/B
A/C no. : 5446614
Balance : 2000
Enter option: 5
*/
