#include<iostream>
using namespace std;
#define MAX_ITEM 50
//Program to process shopping list using class
//		by Aniruddha
class item
{
	int code[MAX_ITEM];
	float price[MAX_ITEM];
	int count;
	public:
		item()
		{
			count = 0;
		}
		void getitem()
		{
			cout<<"Enter item code : ";
    			cin>>code[count];
			cout<<"Enter item cost : ";
			cin>>price[count];
			count++;
		}
		void displayValue()  
		{
    			float sum = 0;
    			for(int i = 0; i<count; i++)
    				sum += price[i];
    			cout<<"\n Total value :"<<sum<<"\n";
		}
		void display()    
		{
    		cout<<"\nCode\tPrice \n";
    		for(int i = 0; i<count; i++)
           		cout<<code[i]<<"\t"<<price[i]<<endl;
		}
};
int main()
{	
	int a;	
	item x;		
	cout<<"1)Add item\n2)Display total value\n3)Display all items\n4)Exit";
	while(1)
	{
		cout<<"\nEnter option: ";
		cin>>a;
		switch(a)
		{
			case 1:x.getitem();break;
			case 2:x.displayValue();break;
			case 3:x.display();break;
			case 4:return 0;
			default:cout<<"Try Again";
		}
			
	}
		
}

/*Sample Output
1)Add item
2)Display total value
3)Display all items
4)Exit
Enter option: 1
Enter item code : 55
Enter item cost : 50.50

Enter option: 1
Enter item code : 25
Enter item cost : 12.75

Enter option: 2

 Total value :63.25

Enter option: 3

 Code	Price 
 55	50.5
25	12.75

Enter option: 4

*/
