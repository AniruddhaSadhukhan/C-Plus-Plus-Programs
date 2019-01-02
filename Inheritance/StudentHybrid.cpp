#include<iostream>
using namespace std;

/*Create a Class Student that includes Roll Number as its data member. Create
two classes Named Test and Sports. Class Test inherits the property of Class
Student and includes data members such as marks in two subjects. Class
Sports includes score in sports. Both the Class includes Member functions to
show their data. Create another class result which is a public derivation of
Class Test and Sports and displays the result of the marks obtained along
with the roll number. (HYBRID INHERITANCE). */
//		by Aniruddha

class Student
{
	protected:
		int roll;
		Student(int r):roll(r) {}
};

class Test:public Student
{
	protected:
		int marks1,marks2;
		Test(int r,int m1,int m2): Student(r),marks1(m1),marks2(m2) {}	
		void show()
		{
			cout<<"The marks are "<<marks1<<" & "<<marks2<<endl;
		}
};

class Sports
{
	protected:
		int score;
		Sports(int s):score(s) {}
		void show()
		{
			cout<<"Score = "<<score<<endl;
		}
};

class Result:public Test,Sports
{
	public:
	Result(int r,int m1,int m2,int s) : Test(r,m1,m2),Sports(s) {}
	void show()
	{
		cout<<"Roll : "<<roll<<endl;
		Test::show();
		Sports::show();
		cout<<"Total Marks : "<<marks1+marks2+score<<endl;
	}
};

int main()
{	
	Result *r = new Result(4,90,95,75);
	r->show();
	return 0;	
}

/*Sample Output
Roll : 4
The marks are 90 & 95
Score = 75
Total Marks : 260

*/
