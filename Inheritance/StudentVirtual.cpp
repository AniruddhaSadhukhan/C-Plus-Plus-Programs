#include<iostream>
using namespace std;

/* Create a Class Student that includes Roll Number as its data member. Create
two classes Named Test and Sports. Class Test inherits the property of Class
Student and includes data members such as marks in two subjects. Class
Sports also inherits the property of Class Student and includes score in
sports. Both the Class includes Member functions to show their data. Create
another class result which is a public derivation of Class Test and Sports
and displays the result of the marks obtained along with the roll number.
(HYBRID INHERITANCE: USE OF VIRTUAL CLASS).*/
//		by Aniruddha

class Student
{
	protected:
		int roll;
};

class Test:virtual public Student
{
	protected:
		int marks1,marks2;
		Test(int m1,int m2): marks1(m1),marks2(m2) {}	
		void show()
		{
			cout<<"The marks are "<<marks1<<" & "<<marks2<<endl;
		}
};

class Sports:virtual public Student
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
	Result(int r,int m1,int m2,int s) : Test(m1,m2),Sports(s) 
	{
		roll = r;	
	}
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
