#include<iostream>
using namespace std;

/*Create a class Student which includes a data member “ROLL NUMBER”. Create a
class Test which is a public derivation of class Student and includes marks in two
different subjects. Add another class Result which is derived from Test and
calculates total marks and displays the total marks along with the roll number. Write
A C++ program to implement this program. (MULTILEVEL INHERITANCE) */
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
};

class Result:private Test
{
	public:
	Result(int r,int m1,int m2) : Test(r,m1,m2) {}
	void show()
	{
		cout<<"Roll : "<<roll<<"\nMarks : "<<marks1+marks2<<endl;
	}
};

int main()
{	
	Result *r = new Result(4,90,95);
	r->show();
	return 0;
}

/*Sample Output
Roll : 4
Marks : 185

*/
