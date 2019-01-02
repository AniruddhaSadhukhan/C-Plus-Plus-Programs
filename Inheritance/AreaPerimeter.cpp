#include<iostream>
using namespace std;

/*Create two classes Area and Perimeter which calculate area and perimeter of
a polygon using length of two sides. Derive a class Rectangle from those two
classes and find out the area and perimeter of the Rectangle. (MULTIPLE
INHERITANCE) */
//		by Aniruddha

class Area
{
	protected:
		void area(int a,int b)
		{
			cout<<"Area = "<<a*b<<endl;
		}
};

class Perimeter
{
	protected:
		void perimeter(int a,int b)
		{
			cout<<"Perimeter = "<<2*(a+b)<<endl;
		}
};

class Rectangle:private Area,Perimeter
{
	int x,y;
	public:
		Rectangle(int length,int breadth)
		{
			x = length , y = breadth ;	
		}
		
		void show()
		{
			area(x,y);perimeter(x,y);
		}
};

int main()
{	
	Rectangle *r = new Rectangle(5,10);
	r->show();
	return 0;	
}

/*Sample Output
Area = 50
Perimeter = 30

*/
