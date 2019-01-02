#include<iostream>
using namespace std;

/*
Program to represent a vector (a series of float values)
Include member function to perform following task:
a. To create the vector
b. To modify the value of a given element
c. To multiply the vector by a scalar value
d. To display the vector
*/
//		by Aniruddha

class vector
{
	float *arr;
	int n;
	
	public:
		void create()
		{
			cout<<"Enter length: ";
			cin>>n;
			arr = new float[n];
			cout<<"Enter vector: ";
			for(int i=0;i<n;i++) 
				cin>>arr[i];
		}
		
		void modify()
		{
			float val;
			int i;
			cout<<"Which value to modify :";
			cin>>val;
			for(i=0;i<n && arr[i]!=val;i++);
			if(i<n)
			{ 
				cout<<"New value = ";
				cin>>val;
				arr[i]=val;
			}
			else
				cout<<"Not Found";
		}
		
		void multiply()
		{
			float m;
			cout<<"Value to be multiplied : ";
			cin>>m;
			for(int i=0;i<n;i++) 
				arr[i]*=m;
		}
		
		void display()
		{
			for(int i=0;i<n;i++) 
				cout<<arr[i]<<" ";
		}
};

int main()
{	
	int a;	
	vector v;		
	cout<<"1)Create vector\n2)Modify\n3)Multiply scalar\n4)Display\n5)Exit";
	while(1)
	{
		cout<<"\nEnter option: ";
		cin>>a;
		switch(a)
		{
			case 1:v.create();break;
			case 2:v.modify();break;
			case 3:v.multiply();break;
			case 4:v.display();break;
			case 5:return 0;
			default:cout<<"Try Again";
		}
			
	}
		
}

/*Sample Output
1)Create vector
2)Modify
3)Multiply scalar
4)Display
5)Exit
Enter option: 1
Enter length: 5
Enter vector: 5 10 50 20 25    

Enter option: 2
Which value to modify :50
New value = 15

Enter option: 4
5 10 15 20 25 
Enter option: 3
Value to be multiplied : 2

Enter option: 4
10 20 30 40 50 
Enter option: 5
*/
