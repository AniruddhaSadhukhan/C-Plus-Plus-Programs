#include<iostream>
using namespace std;

/*Write a C++ program to declare the student structure 
with private, protected and public sections and declare 
object and access data items of these different sections.*/
//				by Aniruddha

struct Student
{
	private:
		float marks;
	protected:
		int roll;
	public:
		char name[30];
	public:
		void input()
		{
			cout<<"Enter name : ";
			cin>>ws;
			cin.getline(name,29);
			cout<<"Enter roll : ";
			cin>>roll;
			cout<<"Enter marks : ";
			cin>>marks;
		}
		void output();
};			

void Student :: output()
{
	cout<<"Name : "<<name<<endl<<"Roll : "<<roll<<endl<<"Marks : "<<marks<<endl;
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
/*Sample Output
Enter name : Aniruddha Sadhukhan
Enter roll : 4
Enter marks : 93
Name : Aniruddha Sadhukhan
Roll : 4
Marks : 93
Enter name : Arka Roy
Enter roll : 5
Enter marks : 85
Name : Arka Roy
Roll : 5
Marks : 85

*/
