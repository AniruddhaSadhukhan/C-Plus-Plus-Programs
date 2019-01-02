#include<iostream>
using namespace std;

//Program to find area of Right Angled Triangle using Default Argument
//		by Aniruddha

void area(float b=5,float h=10)
{
	cout<<"Area = "<<0.5*(b*h)<<endl;
}

int main()
{	
	area();
	area(10);
	area(10,20);
	return 0;
}

/*Sample Output
Area = 25
Area = 50
Area = 100
*/
