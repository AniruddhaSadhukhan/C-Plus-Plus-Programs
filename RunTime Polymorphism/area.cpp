#include<iostream>
using namespace std;

/*Create a base class Shape .Use this Class to store two double type values that could
be used to compute areas. Add two derived Class Triangle and Rectangle from the
base Class Shape. Add to the base class, a member functions get_data () to
initialize the data members in the base class and add another member function
display_area () to compute the area. Declare this member function as virtual. Write
a C++ program to implement the class that accepts dimensions and calculate area.
(RUN TIME POLYMORPHISM).*/
//		by Aniruddha

class Shape
{
	public: double a,b;
		void get_data ()
		{
			cin>>a>>b;
		}
		virtual void display_area () = 0;
};

class Triangle:public Shape
{
	public: void display_area ()
	{
		cout<<"Area of triangle "<<0.5*a*b<<endl;
	}
};

class Rectangle:public Shape
{
	public: void display_area ()
	{
		cout<<"Area of rectangle "<<a*b<<endl;
	}
};

int main()
{	
	Triangle t;
	Shape *st = &t;
	cout<<"Enter base and altitude: ";
	st->get_data();
	st->display_area();
	
	Rectangle r;
	Shape *sr = &r;
	cout<<"Enter length and breadth: ";
	sr->get_data();
	sr->display_area();
	return 0;	
}

/*Sample Output
Enter base and altitude: 5 10
Area of triangle 25
Enter length and breadth: 5 10
Area of rectangle 50

*/
