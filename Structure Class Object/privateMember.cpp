#include<iostream>
using namespace std;

//Program to access private members of the student 
//structure using public member function (inside or outside the structure).
//				by Aniruddha

struct Student
{
	private:
		char name[30];
		int roll;
	public:
		void input()
		{
			cout<<"Enter name : ";
			cin>>ws;
			cin.getline(name,29);
			cout<<"Enter roll : ";
			cin>>roll;
		}
		void output();
};			

void Student :: output()
{
	cout<<"Name : "<<name<<endl<<"Roll : "<<roll<<endl;
}

int main()
{
	Student a,b;
	a.input();
	a.output();
	b.input();
	b.output();
	return 0;
}

/*Sample Output:
Enter name : Aniruddha Sadhukhan
Enter roll : 4
Name : Aniruddha Sadhukhan
Roll : 4
Enter name : Arka Roy
Enter roll : 5
Name : Arka Roy
Roll : 5
*/

