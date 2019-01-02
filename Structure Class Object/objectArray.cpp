#include<iostream>
using namespace std;

/*
Program to define a student class for n numbers of students 
using array of objects. Initialize the object by name and 
semester grade point and display them
*/
//		by Aniruddha

class Student
{
		int roll;
		float gpa;
		char name[30];
	public:
		void input()
		{
			cout<<"Enter name : ";
			cin>>ws;
			cin.getline(name,29);
			cout<<"Enter roll : ";
			cin>>roll;
			cout<<"Enter GPA : ";
			cin>>gpa;
		}
		void output()
		{
			cout<<"Name : "<<name<<endl<<"Roll : "<<roll<<endl<<"GPA : "<<gpa<<endl;
		}
};			

int main()
{	
	int a,i;	
			
	cout<<"Enter number of students : ";
	cin>>a;
	
	Student	*s = new Student[a];
	
	for(i=0;i<a;i++)
	{
		cout<<"Student "<<i+1<<endl;
		s[i].input();
	}
	cout<<endl;
	for(i=0;i<a;i++)
	{
		cout<<"Student "<<i+1<<endl;
		s[i].output();
	}
}

/*Sample Output
Enter number of students : 2
Student 1
Enter name : Aniruddha Sadhukhan
Enter roll : 4
Enter GPA : 9.35
Student 2
Enter name : Arka Roy
Enter roll : 5
Enter GPA : 8.5

Student 1
Name : Aniruddha Sadhukhan
Roll : 4
GPA : 9.35
Student 2
Name : Arka Roy
Roll : 5
GPA : 8.5
*/
