#include<iostream>
using namespace std;

/*Write a C++ program to enter information of a student 
using class student and display the following information:
DATA MEMBER Name, Roll,Department
FUNCTIONS To get data from the user, To display the data.*/
//				by Aniruddha

class Student
{
		int roll;
		char name[30],dept[5];
	public:
		void input()
		{
			cout<<"Enter name : ";
			cin>>ws;
			cin.getline(name,29);
			cout<<"Enter roll : ";
			cin>>roll;
			cout<<"Enter dept : ";
			cin>>dept;
		}
		void output();
};			

void Student :: output()
{
	cout<<"Name : "<<name<<endl<<"Roll : "<<roll<<endl<<"Dept : "<<dept<<endl;
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
Enter dept : cse
Name : Aniruddha Sadhukhan
Roll : 4
Dept : cse
Enter name : Arka Roy
Enter roll : 10
Enter dept : ece
Name : Arka Roy
Roll : 10
Dept : ece

*/
