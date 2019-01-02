#include<iostream>
#include<cstring>
using namespace std;

//Program to print student details of the student class 
//using new, delete operator and also use constructors
//		by Aniruddha

class Student
{
	int roll;
	char name[30];
	public:
		Student()
		{
			roll=0;
			strcpy(name,"NULL");
		}
		Student(int r,char n[])
		{
			roll=r;
			strcpy(name,n);
		}
		void input()
		{
			cout<<"Enter roll ";
			cin>>roll;
			cout<<"Name ";
			cin>>ws;
			cin.getline(name,29);
		}
		void display()
		{
			cout<<"\nRoll :"<<roll<<"\nName :"<<name;
		}
};

int main()
{	
	int n;	
	cin>>n;
	Student *s = new Student[n];
	Student *s1 = new Student(4,"Aniruddha");
	for(int i=0;i<n;i++)
		s[i].input();	
	cout<<"Student Details: ";
	s1->display();
	for(int i=0;i<n;i++)
		s[i].display();	
	delete []s,s1;
	return 0;	
}

/*Sample Output
2
Enter roll 4
Name Arka Roy
Enter roll 5
Name Ram Sen
Student Details: 
Roll :4
Name :Aniruddha
Roll :4
Name :Arka Roy
Roll :5
Name :Ram Sen
*/
