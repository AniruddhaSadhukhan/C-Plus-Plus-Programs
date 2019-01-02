#include<iostream>
using namespace std;

/*Create a class Polygon which takes length of two sides as its data members. Derive
two classes-rectangle and triangle from the parent Class and calculate the area in
each child classes. (HIERARCHIAL INHERITANCE). */
//		by Aniruddha

class Polygon
{
	protected:int a,b;
};

class Rectangle:private Polygon
{
	public:
		Rectangle(int length,int breadth)
		{
			a = length , b = breadth ;	
		}
		void area()
		{
			cout<<"Rectangle area = "<<a*b<<endl;
		}
};

class Triangle:private Polygon
{
	public:
		Triangle(int base,int altitude)
		{
			a = base , b = altitude;	
		}
		void area()
		{
			cout<<"Triangle area = "<<0.5*a*b<<endl;
		}
};

int main()
{	
	Rectangle *r = new Rectangle(5,10);
	r->area();
	Triangle *t = new Triangle(5,10);
	t->area();
	delete r,t;
	return 0;
}

/*Sample Output
Rectangle area = 50
Triangle area = 25

*/
